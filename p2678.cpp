#include<bits/stdc++.h>
using namespace std;
int d[50001],n,m,l,maxl,res,k;

bool check(int x){
    int tot=0; // ���ߵ�ʯͷ��
    int now=0; // ��ǰ����ʯͷ
    for(int next=1; next<=n+1; next++){ // ��������ʯͷ���յ�
        if(d[next]-d[now] < x) {
            // �����һ�����յ㣬�������ߣ�ֱ�ӷ���false
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
    for(int i=1; i<=n; i++){ // ��������ѭ������ȷ��ȡn��ʯͷ��λ��
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
