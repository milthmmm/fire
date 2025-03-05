#include<iostream>
#include<cstdio>
using namespace std;
int a,b,n,k[201],res;
void dfs(int x){
	if(x==b) return ;
	if(x>b) {
	dfs(x-k[x]);
	res++; 
	}
	if(x<b) {
	dfs(x+k[x]);
	res++;
	} 
}
int main(){
	scanf("%d %d %d",&n,&a,&b);
	for(int i=1;i<=n;i++){
		scanf("%d ",&k[i]);
	}
	dfs(a);
	printf("%d",res);
	return 0;
} 
