#include <bits/stdc++.h>
using namespace std;
int main(){
	string s;
	cin>>s;
	int length=s.size(),ans=0;
	for(int i=0;i<length;i++){
		for(int j=i+1;j<length;j++){
			if(s[j]<s[i]) {
				ans++;
				continue;
			}
			if(s[j]==s[i]){
				int k=1;
				while(i+k<j-k){
					char left=s[i+k],right=s[j-k];
					if(left>right) {
						ans++;break;
					}
					if(left<right) {
						break;
					}		
				} 
			}
			
		}
	}
	cout<<ans;
	return 0;
}
