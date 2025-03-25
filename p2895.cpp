#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int> PII;
#define x first
#define y second
int m,x,y,t;
int a[310][310],b[2][5000],c[310],dist[310][310]; 
int dx[4]={0,0,1,-1},dy[4]={1,-1,0,0};
PII q[301*301];
int bfs(){
	memset(dist,-1,sizeof(dist)); 
	q[0]={0,0};
	dist[0][0]=0;
	int hh=0,tt=0;
	while(hh<=tt){
		auto t=q[hh++];
		for(int i=0;i<4;i++){
			int c=t.x+dx[i],d=t.y+dy[i];
			if(c<0||d<0) continue;
			if(dist[c][d]!=-1) continue;
			int time=dist[t.x][t.y]+1;
			if(time<a[c][d]||a[c][d]==0x3f3f3f3f){
                dist[c][d]=time;
				if(a[c][d]==0x3f3f3f3f) return time;	
				q[++tt]={c,d};
			}
		}
	}
	return -1;
}
int main(){
	scanf("%d",&m);
	memset(a,0x3f,sizeof(a));
	while(m--){
		scanf("%d %d %d",&x,&y,&t);
			a[x][y]=min(t,a[x][y]);
			a[x+1][y]=min(t,a[x+1][y]);
			a[x][y+1]=min(t,a[x][y+1]);
			if(x-1>=0) a[x-1][y]=min(t,a[x-1][y]);
			if(y-1>=0) a[x][y-1]=min(t,a[x][y-1]);
		}
		printf("%d",bfs());
		return 0;
	}
