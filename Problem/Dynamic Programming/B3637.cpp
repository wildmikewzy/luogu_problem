//最长上升子序列
#include<iostream>
#include<cstdio>
#include<cmath>

using namespace std;
int n;
const int maxn=1e+6+1;
int a[maxn],dp[maxn];
int main(){
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    dp[1]=1;
    for(int i=2;i<=n;i++){
        dp[i]=1;
        for(int j=i-1;j>=1;j--){
            if(a[j]<a[i])
                dp[i]=max(dp[i],dp[j]+1);
        }
    }
    int flag=1;
    for(int i=2;i<=n;i++){
        if(dp[i]>dp[flag])
            flag=i;
    }
    cout<<dp[flag]<<endl;
    return 0;
}