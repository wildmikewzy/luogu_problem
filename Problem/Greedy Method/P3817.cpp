//小A的糖果
#include<iostream>
#include<cstdio>

using namespace std;
const int maxn=1e5+5;
int n,x;
int a[maxn];
int main(){
    long long ans=0;
    cin>>n>>x;
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    if(a[1]>x){
        ans+=a[1]-x;
        a[1]=x;
    }
    for(int i=2;i<=n;i++){
        if(a[i]+a[i-1]>x){
            ans+=(a[i]+a[i-1]-x);
            a[i]=x-a[i-1];
        }
        else  continue;
    }
    cout<<ans<<endl;
    return 0;
}