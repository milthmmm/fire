#include <iostream>
#include <vector>
using namespace std;
int board[21][21],n;
bool judge(int p,int q){
	//2.不可连续出现 
	if(p==1){
		if(q==1) {
			if(board[p+1][q]==board[p][q]||board[p][q+1]==board[p][q]) return false;
		}else if(q==n){
			if(board[p+1][q]==board[p][q]||board[p][q-1]==board[p][q]) return false;
		}else
			if(board[p+1][q]==board[p][q]||board[p][q-1]==board[p][q]||board[p+1][q+1]==board[p][q]) return false;
	}
	if(p==n){
		if(q==1) {
			if(board[p-1][q]==board[p][q]||board[p][q+1]==board[p][q]) return false;
		}else if(q==n){
			if(board[p-1][q]==board[p][q]||board[p][q-1]==board[p][q]) return false;
		}else
			if(board[p-1][q]==board[p][q]||board[p][q-1]==board[p][q]||board[p][q+1]==board[p][q]) return false;
	}
	if(q==1&&p!=1&&p!=n){
		if(board[p+1][q]==board[p][q]||board[p][q+1]==board[p][q]||board[p-1][q]==board[p][q]) return false;
	}
	if(q==n&p!=1&&p!=n){
		if(board[p+1][q]==board[p][q]||board[p][q-1]==board[p][q]||board[p-1][q]==board[p][q]) return false;
	}
	//4.行列唯一 
	for(int i=1;i<=n;i++){
		if(board[i]==board[p]) return false;
	}
	vector <int> a,b;
	for(int i=1;i<=n;i++){
		a.push_back(board[i][q]);
	}
	for(int j=1;j<=n;j++){
		if(j==q) continue;
		for(int i=1;i<=n;i++){
		b.push_back(board[i][j]);
		}
		if(a==b) return false;
	}
	//3.行列01相等
	int cnt0,cnt1,cnt2,cnt3;
	 	for(int j=1;j<=n;j++){
	 		if(board[p][j]==0) cnt0++;
	 		if(board[p][j]==1) cnt1++;
		 } if(cnt0!=n/2||cnt1!=n/2) return false;
		 for(int j=1;j<=n;j++){
	 		if(board[j][q]==0) cnt2++;
	 		if(board[j][q]==1) cnt3++;
		 }if(cnt2!=n/2||cnt3!=n/2) return false;
	return true;
}
int dfs(int x,int y){
	if(board[x][y]!='_') return -1;
	board[x][y]=0;
	if(judge(x,y)) return 0;
	else return 1;
}
int main(){
  scanf("%d",&n);
  for(int i=1;i<=n;i++){
  	for(int j=1;j<=n;j++){
  	scanf("%c",&board[i][j]);
 		}
	}
  for(int i=1;i<=n;i++){
  	for(int j=1;j<=n;j++){
		if(board[i][j]=='_') dfs(i,j);
  return 0;
}
}
}
