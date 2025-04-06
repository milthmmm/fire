#include <iostream>
using namespace std;
long long n=2021041820210418;
int main(){
  int sum=1;
  for(long long i=2;i<n;i++){
  	for(long long j=i;j<n;j++){
	  for(long long k=j;k<n;k++){
  		if(n%k==0){
  			if(n%k%j==0){
  					if(i*k*j==n) sum++;
				  }
			  }
		  }
  	}
  }
  printf("%d",sum);
  return 0;
}
