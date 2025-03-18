#include<bits/stdc++.h>
using namespace std;
int d[50001],n,m,l,maxl,res,k;

bool check(int x){
    int tot=0; // 移走的石头数
    int now=0; // 当前所在石头
    for(int next=1; next<=n+1; next++){ // 遍历所有石头和终点
        if(d[next]-d[now] < x) {
            // 如果下一个是终点，则不能移走，直接返回false
            if(next == n+1) return false;
            tot++;
        } else {
            now = next;
        }
    }
    return tot <= m;
}

int main(){
    scanf("%d %d %d",&k,&n,&m);
    d[0] = 0;
    d[n+1] = k;
    for(int i=1; i<=n; i++){ // 修正输入循环，正确读取n个石头的位置
        scanf("%d",&d[i]);
    }
    int l=0, r=k;
    while(l <= r){
        int mid = l + (r-l)/2;
        if(check(mid)){
            res = mid;
            l = mid + 1;
        } else {
            r = mid -1;
        }
    }
    printf("%d",res);
    return 0;
}
