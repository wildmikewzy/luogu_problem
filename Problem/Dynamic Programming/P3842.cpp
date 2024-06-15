//线段
#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cmath>
#include<cstring>
using namespace std;
const int maxn=2*1e4+5;
int l[maxn],r[maxn],len[maxn];
int dp[maxn][2];      //dp[i][0]就表示在第i行中以线段的左端点结尾，dp[i][1]表示在第行中以线段的右端点结尾
int n;
int main(){
    memset(dp,0,sizeof(dp));
    memset(len,0,sizeof(len));
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>l[i]>>r[i];
        len[i]=r[i]-l[i];       //从l[i]走到r[i]所需要的路程
    }
    dp[1][0]=r[1]+len[1]-1;
    dp[1][1]=r[1]-1;
    for(int i=2;i<=n;i++){
        dp[i][0]=min(dp[i-1][0]+abs(r[i]-l[i-1])+len[i]+1,dp[i-1][1]+abs(r[i-1]-r[i])+len[i]+1);
        dp[i][1]=min(dp[i-1][0]+abs(l[i]-l[i-1])+len[i]+1,dp[i-1][1]+abs(r[i-1]-l[i])+len[i]+1);
    }
    cout<<min(dp[n][0]+n-l[n],dp[n][1]+n-r[n]);
    return 0;
}