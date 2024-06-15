//混合牛奶MIxing Milk
#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
const int maxn=5005;
int n,m;        //牛奶的总量，提高牛奶的农民的个数
struct Milk{
    int p;  //单价
    int a;  //最多卖出的牛奶量
    int total;
};
Milk milk[maxn];
bool comp(Milk x,Milk y){
    return x.p<y.p;
}
int main(){
    cin>>n>>m;
    for(int i=1;i<=m;i++){
        cin>>milk[i].p>>milk[i].a;
        milk[i].total=milk[i].p*milk[i].a;
    }
    sort(milk+1,milk+m+1,comp);
    long long ans=0;        //money we need
    for(int i=1;i<=m;i++){
        if(n>milk[i].a){
            ans+=milk[i].total;
            n-=milk[i].a;
        }
        else{
            ans+=double(n)/double(milk[i].a)*milk[i].total;
            break;
        }
    }
    cout<<ans<<endl;
    return 0;
}