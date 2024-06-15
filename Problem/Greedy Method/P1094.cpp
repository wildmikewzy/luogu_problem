//纪念品分组
#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cstring>
using namespace std;
const int maxn=3*1e4+5;
int w,n;
int p[maxn];
int main(){
    cin>>w;      //每组纪念品价格之和的上限
    cin>>n;     //用来表示纪念品的总件数G
    for(int i=1;i<=n;i++){
        cin>>p[i];
    }
    sort(p+1,p+n+1);
    int l=1,r=n;
    long long ans=0;
    while(l<=r){
        if(l==r){
            ans++;
            break;
        }
        else{
            if(p[l]+p[r]<=w){
                ans++;
                l++;
                r--;
            }
            else{
                ans++;
                r--;
            }
        }
    }
    cout<<ans<<endl;
    return 0;
}