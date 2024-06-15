//摆花 解法2
#include<iostream>
#include<cstdio>

using namespace std;
int n,m;
const int maxn=105;
const int mod=1e6+7;
int a[maxn];
int dp[maxn][maxn];     //表示前i种花拜访j盆的最大方案数字
int main(){
    freopen("C:\\Users\\ssyz__yw3k9a\\Desktop\\P1077_2.in","r",stdin);
    cin>>n>>m;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    dp[0][0]=1;
    for(int i=1;i<=n;i++){
        for(int j=0;j<=m;j++){
            for(int k=0;k<=a[i];k++){
                if(k<=j)
                    dp[i][j]=(dp[i][j]+dp[i-1][j-k])%mod;
            }
        }
    }
    cout<<dp[n][m]<<endl;
    return 0;
}