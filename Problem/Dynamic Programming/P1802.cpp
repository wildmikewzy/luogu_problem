//5 倍经验日(01背包问题变式)
#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main(){
    //freopen("C:\\Users\\ssyz__yw3k9a\\Desktop\\test.in","r",stdin);
    long long n,x;
    cin>>n>>x;
    long long lose[n+1],win[n+1],use[n+1];
    long long dp[n+1][x+1];
    for(int i=1;i<=n;i++){
        cin>>lose[i]>>win[i]>>use[i];
    }
    for(int i=0;i<=n;i++)
        dp[i][0]=lose[i];
    for(int i=0;i<=x;i++)
        dp[0][i]=0;
    for(int i=1;i<=n;i++){
        for(int j=x;j>=0;j--){
            if(j>=use[i])
                dp[i][j]=max(dp[i-1][j]+lose[i],dp[i-1][j-use[i]]+win[i]);
            else
                dp[i][j]=dp[i-1][j]+lose[i];
        }
    }
    cout<<dp[n][x]*5<<endl;
    return 0;
}