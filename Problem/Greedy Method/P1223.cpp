//排队接水
#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
const int maxn=1005;
struct P{
    int t;
    int mark;
};
P t[maxn];
bool comp(P a,P b){
    return a.t<b.t;
}
int main(){
    //freopen("C:\\Users\\ssyz__yw3k9a\\Desktop\\P1223_3.in","r",stdin);
    long long time=0;
    long long n;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>t[i].t;
        t[i].mark=i;
    }
    sort(t+1,t+n+1,comp);
    for(int i=1;i<=n;i++){
        time+=t[i].t*(n-i);
        cout<<t[i].mark<<" ";
    }
    cout<<endl;
    printf("%.2lf",double(time)/double(n));
    return 0;
}