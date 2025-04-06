#include <iostream>
#include <cmath>
using namespace std;
long long w,h,m,n;
int judge(long long m,long long n){
	long long minx=min(m,n);
	long long a=sqrt(minx);
	for(long long i=2;i<=a;i++){
		if(m%i==0&&n%i==0) return (m/i)*(n/i);
	}
	return 0;
}
int main(){
	scanf("%d %d",&w,&h);
	printf("%d",judge(w,h));
  return 0;
}
