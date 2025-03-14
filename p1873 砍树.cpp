#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
using namespace std;
vector <int> a;
int n,m;
bool wood(int w){
    long long sum=0;
    for(int i=0;i<n;i++){
        if(a[i]>w) sum+=a[i]-w;
        if(sum>=m) return true;
    }
    return sum>=m;
}

int main(){
    int maxh=0,ans=0;
    scanf("%d %d",&n,&m);
    a.resize(n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
        maxh=max(a[i],maxh);
    }
    int l=0,r=maxh;
    while(l<=r){
    int mid=l+(r-l)/2;
    if(wood(mid)){
        ans=mid;
        l=mid+1;
        }
        else r=mid-1;
    }
    printf("%d",ans);
    return 0;
}
