#include <iostream>
using namespace std;
const long long N=10010;
long long t,l[N],r[N];
int judge(long long m,long long n){
	long long res=0;
	for(int i=m;i<=n;i++){
		for(int j=m;j<=n;j++){
			if(i+j<=n&&i+j>=m) res++;
		}
	}
	return res;
}
int main(){
	scanf("%d",&t); 
	for(long long i=1;i<=t;i++){
	scanf("%d %d",&l[i],&r[i]); 
	printf("%d",judge(l[i],r[i]));
	}
 	return 0;
}
