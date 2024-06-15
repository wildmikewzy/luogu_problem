//疯狂的采药(完全背包问题的变式)
#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
using namespace std;
int main(){
    int t,m;    //能够用来采药的时间t和草药的数目m
    cin>>t>>m;
    long long a[m+1],b[m+1];
    long long dp[t+1];
    for(int i=1;i<=m;i++){
        cin>>a[i]>>b[i];    //a表示采摘第i种草药所需的时间，b表示该草药的价值;
    }
    memset(dp,0,sizeof(dp));
    for(int i=1;i<=m;i++){
        for(int j=a[i];j<=t;j++){
            dp[j]=max(dp[j],dp[j-a[i]]+b[i]);
        }
    }
    cout<<dp[t]<<endl;
    return 0;
}