#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
int main(){
	int t,m,time[110],value[110],f[110][1010];
	scanf("%d %d",&t,&m);
	for(int i=1;i<=m;i++){
		scanf("%d %d",&time[i],&value[i]);
	}
    memset(f,0,sizeof(f));
	for(int i=1;i<=m;i++){
		for(int j=1;j<=t;j++){
			if(j>=time[i]) f[i][j]=max(f[i-1][j],f[i-1][j-time[i]]+value[i]);
			else f[i][j]=f[i-1][j];
		}
	}
	printf("%d",f[m][t]);
	return 0;
} 
