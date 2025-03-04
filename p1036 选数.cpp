#include<iostream>
#include<cstdio>
using namespace std;
int n,r,star,q[20],res,sum,x,k;
bool st[21];
int arr[21];
void dfs(int x,int star){
if(x>k){
	for(int i=1;i<=k;i++)
	sum+=arr[i];
	if(sum<2) return;
	for(int i=2;i<sum/i;i++)
	{if(sum%i==0) return;
	else res++;
	}
}
for (int i=star;i<n;i++)
{arr[x]=q[i];
dfs(x+1,i+1);
arr[x]=0;
}
}
int main(){
	scanf("%d %d",&n,&r);
	for(int i=0;i<n;i++){
	scanf("%d",&q[i]);
	}
	dfs(1,1);
	printf("%d",&res);
return 0;
}
