#include<bits\stdc++.h>
using namespace std;
int fire[11]={6,2,5,5,4,5,6,3,7,6};
int res=0,ans=0,t;
int wood(int x){
	if(x==0) return fire[0];
	while(x!=0){
		t=x%10;
		ans+=fire[t];
		x/=10;
	}
	return ans;
}

int main(){
	scanf("%d",&n);
	for (int i=0;i<=1000;i++){
		for (int j=0;j<=1000;j++){
		if(wood(i)+wood(j)+wood(i+j)==n-4)
		res++;
	}
}
	printf("%d",res)£» 
	return 0;
}
