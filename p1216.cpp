#include<cstdio>
#include<cstring>
#include<algorithm> 
using namespace std;
const int N=1010; 
int main(){
	int r,g[N][N],f[N][N],res=0;
    memset(f,0,sizeof(f));
	scanf("%d",&r);
	for(int i=1;i<=r;i++){
		for(int j=1;j<=i;j++){
			scanf("%d",&g[i][j]);
		}
	}
	for(int i=1;i<=r;i++){
		for(int j=1;j<=i;j++){
			f[i][j]=max(f[i-1][j],f[i-1][j-1])+g[i][j];
			}
		}	
	for(int i=1;i<=r;i++){
		res=max(f[r][i],res);
	}
	printf("%d",res);
	return 0;
}
