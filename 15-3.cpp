#include<iostream>
#include<algorithm>
#include<cstring>
#include<cmaths>
using namespace std;

int main(){
	scanf("%d %d",&n,&m);
	for(int i=0;i<n;i++){
		scanf("%d",&c[i]);
	}
	for(int i=0;i<m;i++){
		scanf("%d",&d[i]);
	}
	for(int i=0;i<n-1;i++){
		scanf("%d %d",&u[i],&v[i]);
	}
	for(int i=0;i<m-1;i++){
		scanf("%d %d",&p[i],&q[i]);
	}
	return 0;
} 
