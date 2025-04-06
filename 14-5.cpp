#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
	long long n,m,k;
	long long a[10001],b[10001];
	vector <long long> c;
	scanf("%d %d %d",&n,&m,&k);
	for(long long i=1;i<=n;i++){
		scanf("%d",&a[i]);
	} 
	for(long long i=1;i<=m;i++){
		scanf("%d",&b[i]);
	} 
		for(long long i=1;i<=n;i++){
			for(long long j=1;j<=m;j++){
			c.push_back(a[i]+b[j]);
		}
	}
	sort(c.begin(),c.end()); 
	printf("%lld",c[k-1]);
	return 0;
}
