#include<cstdio>
#include<iostream>
using namespace std;
int n,arr[21],res,m[59050][10],sum,t=0;
void dfs(int x,int sum){
	if(sum>n) return;
	if(x>10){
	if(sum==n) {
	res++;
	for(int i=1;i<=10;i++) m[res][i]=arr[i];}
	return ; 
	}	for(int k=1;k<=3;k++){
		arr[x]=k;
		dfs(x+1,sum+k);
		arr[x]=0;
	
}
}
int main(){
	scanf("%d",&n);
	dfs(1,0);
	printf("%d\n",res);
	for(int i=1;i<=res;i++) {
	for(int j=1;j<=10;j++) printf("%d ",m[i][j]);
	printf("\n");
	}
	return 0;
}
