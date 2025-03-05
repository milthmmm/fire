#include<iostream>
#include<cmath>
#include<cstdio>
using namespace std;
int s[11],b[11],n,ans=1e9;
void dfs(int i,int x,int y){
	if(i>n) {
		if(x==1&&y==0)	return;
		ans=min(abs(x-y),ans);
		return;
	}
	dfs(i+1,x,y);
	dfs(i+1,x*s[i],y+b[i]); 
}
int main(){
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		scanf("%d %d",&s[i],&b[i]);
	}
	dfs(1,1,0);
	printf("%d",ans);
	return 0;
} 
