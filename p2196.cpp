#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
int dfs(int x){
	if(!st[x]) return 0;
	if() {
		
	}
}
int main(){
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		scanf("%d",d[i]);
	}
	for(int i=1;i<=n-1;i++){
		for(int j=n-1;j>=1;j--){
			scanf("%d",&st[i][j]);
		}
	}
	st[n][0]=0;
	printf("%d",dfs(1));
	return 0;
} 
