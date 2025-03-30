#include<cstdio>
#include<cstring>
#include<algorithm> 
using namespace std;
int main(){
	int r,f[20];
	scanf("%d",&r);
	f[1]=1;
	f[2]=2;
	if(r==1||r==2) {printf("%d",f[r]);return 0;}
	for(int i=3;i<=r;i++) 
	f[i]=f[i-1]+f[i-2];
	printf("%d",f[r]);
	return 0;
}
