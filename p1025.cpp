#include<cstdio>
#include<iostream>
using namespace std;
int n,k,res=0;
void dfs(int x,int y,int sum){ 
	if(x==k){
		if(sum==n) res++;
		return;
	}
    int j=k-x;
	for(int i=y;i<n;i++){
		if(sum+i*j>n) break;
		dfs(x+1,i,sum+i);
	}
}
int main(){
	scanf("%d %d",&n,&k);
	dfs(0,1,0);
	printf("%d",res);
	return 0;
} 
