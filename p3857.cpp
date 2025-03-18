#include<bits/stdc++.h>
using namespace std;
int a[100001],m,n,k,res;
bool check(int x){
	int now=0,cnt=0; 
	for(int i=0;i<=n;i++){
		if(a[i]-now<=x) now=a[i];
		else{
            while(a[i]-now>x){
                now+=x;
                cnt++;
            }
            now=a[i];
	}
}
	return cnt<=k; 
}
int main(){
    scanf("%d %d %d",&m,&n,&k);
    a[0]=0;a[n+1]=m;
	for(int i=1;i<=n;i++){
    	scanf("%d",&a[i]);
	}
	int l=0,r=m;
	while(l<=r){
		int mid=l+(r-l)/2;
		if(check(mid)){
			res=mid;
			r=mid-1;
		}
		else l=mid+1;
	}
	printf("%d",res);
    return 0;
}
