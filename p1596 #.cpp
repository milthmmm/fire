#include<iostream>
#include<cstdio>
using namespace std;
int n,m,res;
char rain[101][101]; 
void dfs(int x,int y){
	int dx,dy;
	rain[x][y]='.';
	for(int i=-1;i<=1;i++){
		for(int j=-1;j<=1;j++){
			dx=x+i;dy=y+j;
    if(dx>=0&&dx<n&&dy>=0&&dy<m&&rain[dx][dy]=='W')
			dfs(dx,dy);
		}
	}
}
int main(){
	scanf("%d %d",&n,&m);
	for(int i=0;i<n;i++){
		scanf("%s",rain[i]);
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
						if(rain[i][j]=='W')
			{dfs(i,j);
			res++;
			}
		}
	}
    printf("%d",res);
	return 0;
} 
