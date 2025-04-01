#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
const int N=25;
int n;
int d[N],st[N][N],mem[N];
int dfs(int x) {
	int max_val=0;
	if(mem[x]!=-1) return mem[x];
	if(!st[x]) return 0;
	for(int j=x+1;j<=n;j++){
		if(st[x][j]) {
		int val=dfs(x)+d[x];
		max_val=max(val,max_val);
		}
	}
	return mem[x]=max_val;
}
int main(){
	memset(mem,-1,sizeof(mem));
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		scanf("%d",d[i]);
	}
	for(int i=1;i<=n-1;i++){
		for(int j=i+1;j<=n;j++){
			scanf("%d",&st[i][j]);
		}
	}
	st[n][0]=0;
	int res=0;
	for(int i=1;i<=n;i++){
		res=max(res,dfs(i));
	}
	printf("%d",res);
	return 0;
} 
