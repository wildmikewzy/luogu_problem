//求区间和
#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int n,m;
const int maxn=1e5+1;
int a[maxn],ps[maxn];
void init(){
    memset(a,0,sizeof(a));
    memset(ps,0,sizeof(ps));
}
void PrefixSum(){
    ps[1]=a[1];
    for(int i=2;i<=n;i++){
        ps[i]=ps[i-1]+a[i];
    }
}
int main(){
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    PrefixSum();
    cin>>m;
    while(m--){
        int l,r;
        cin>>l>>r;
        cout<<ps[r]-ps[l-1]<<endl;
    }
    return 0;
}