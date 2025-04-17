#include <iostream>
using namespace std;
int main(){
	long long n,m,x,l[100001],r[100001];
	cin>>n>>m>>x;
	string s;
	cin>>s;
	for(long long i=0;i<m;i++){
		cin>>l[i]>>r[i];
		for(long long a=s[l[i]];a<=s[r[i]];a++){
			for(long long b=s[l[i]+1];b<=s[r[i]];b++){
				if(a^b==x) cout<<"yes";
				else cout<<"no";
		}
		}
	}
	return 0;
}
