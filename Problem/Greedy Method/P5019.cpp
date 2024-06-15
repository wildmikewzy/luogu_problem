//铺设道路
#include<iostream>
#include<cstdio>

using namespace std;
const int maxn=1e5+5;
int n;  //道路的长度
int d[maxn];
int main(){
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>d[i];
    }
    int ans=d[1];
    for(int i=2;i<=n;i++){
        if(d[i]>d[i-1])
            ans+=(d[i]-d[i-1]);
    }
    cout<<ans<<endl;
    return 0;
}