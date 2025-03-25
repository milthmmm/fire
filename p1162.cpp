#include<bits/stdc++.h>
using namespace std;
int dx[]={0,0,-1,1},dy[]={1,-1,0,0};
bool b[31][31];
int a[31][31],n;
void dfs(int x,int y){
    if(x>n-1||y>n-1||x<0||y<0||b[x][y]||a[x][y]==1) return;
    for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
		if(!b[x][y]&&a[i][j]==0){
    b[x][y]=true;
		for(int i=0;i<4;i++){
			dfs(x+dx[i],y+dy[i]); 
		}
	}
 }
}
}
int main(){
    memset(b, 0, sizeof(b)); 
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
    		scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;i<n;i++){
        dfs(i,0);
        dfs(i,n-1);
        dfs(0,i);
        dfs(n-1,i);
    }
    for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
        if(a[i][j]==0&&!b[i][j])printf("%d ",2);
        else printf("%d ",a[i][j]); 
        } 
         printf("\n");
      }
	return 0;
} 
