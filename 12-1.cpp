#include <iostream>
using namespace std;
int n;
bool judge(int k){
	long long total=(k*(k+1))/2;
	if(total>=n) return true;
}
int main(){
	scanf("%d",&n);
	long long l=0,r=n,mid=l+(r-l)/2;
	while(l<r){
		if(judge(mid)) r=mid;
		else l=mid+1;
	}
	printf("%d",left);
  return 0;
}
