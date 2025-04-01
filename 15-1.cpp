#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
int board[10][10];
int ans=0;
bool judge(int x,int y){
	bool same;
	if(x!=4&&y!=4) return true;
	if(x==4) {
		for(int i=0;i<5;i++){
			if(board[x][y]!=board[i][y]) {
				same=false;
				break;
			}
		}
		if(same) return false;
	}
	if(y==4) {
		for(int i=0;i<5;i++){
			if(board[x][y]!=board[x][i]) {
				same=false;
				break;
			}
		}
		if(same) return false;
	}
	if(x==4&&y==0){
		for(int i=0;i<5;i++){
			if(board[x][y]!=board[i][4-i]){
				same=false;
				break;
			}
		}
		if(same) return false;
	}
	if(y==4&&x==0){
		for(int i=0;i<5;i++){
			if(board[x][y]!=board[i][i]){
				same=false;
				break;
			}
		}
	if(same) return false;
	}
	return true;
}
int dfs(int sum,int w,int b){
	
	if(sum==25) return ++ans;
	int x=sum/5,y=sum%5;
	if(w>0){
		board[x][y]=0;
		if(judge(x,y)) dfs(sum+1,w-1,b);
	}
	if(b>0){
		board[x][y]=0;
		if(judge(x,y)) dfs(sum+1,w,b-1);
	}
}
int main(){
	printf("%d",dfs(0,13,12)); 
} 
