#include<iostream>
#include<cstring>
#include<algorithm>
#include<vector>
using namespace std;
int n,s,p[1010],c[1010];
vector <int> v;
int main(){
	int val;
	scanf("%d %d",&n,&s);
	for(int i=1;i<=n;i++){
		scanf("%d %d",&p[i],&c[i]);
	}
	for(int j=1;j<=n;j++){
		for(int i=1;i<=n;i++){
			val=c[j]*s;
			if(c[i]>c[j]) val+=(c[i]-c[j])*p[i];
		}
		v[j]=val;
	}
	printf("%d",v[1]);
	return 0;
} 
