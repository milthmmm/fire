#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
using namespace std;
int n,c,diff,res=0;
vector <int> arr(20010);
void dfs(int x,int y){
		if(diff==c) res++;
		if(y>n) return;
		diff=arr[y]-arr[x];
		dfs(x+1,y+1);
}
int main(){
	int i;
	scanf("%d %d",&n,&c);
	while(i<=n){
		arr.push_back(i);
	}
	dfs(1,2);
	printf("%d",res);
	return 0;
}
