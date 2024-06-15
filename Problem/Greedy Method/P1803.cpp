//凌乱的yyy/线段覆盖
#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
const int maxn=1e6+5;
int n;
struct T{
    int l;
    int r;
};
T table[maxn];
bool comp(T a,T b){
    return a.r<b.r;
}
int main(){
    int ans=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        cin>>table[i].l>>table[i].r;
    }
    sort(table+1,table+1+n,comp);
    int last_r=-1;
    for(int i=1;i<=n;i++){
        if(table[i].l>=last_r){
            ans++;
            last_r=table[i].r;
        }
    }
    cout<<ans<<endl;
    return 0;
}