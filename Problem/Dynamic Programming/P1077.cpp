//摆花(记忆化搜索)
#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
const int maxn=105;
const int mod=1e6+7;
int n,m;
int a[maxn];
int dp[maxn][maxn];
int dfs(int x,int k){
    if(k>m)
        return 0;
    if(k==m)
        return 1;
    if(x==n+1)
        return 0;
    if(dp[x][k])
        return dp[x][k]%mod;
    for(int i=0;i<=a[x];i++){
        dp[x][k]=(dp[x][k]+dfs(x+1,k+i))%mod;
    }
    return dp[x][k];
}
int main(){
    //freopen("C:\\Users\\ssyz__yw3k9a\\Desktop\\P1077_2.in","r",stdin);
    memset(dp,0,sizeof(dp));
    cin>>n>>m;      //顾客最喜欢的n种花，共m盆
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    cout<<dfs(1,0)%mod<<endl;
    return 0;
}