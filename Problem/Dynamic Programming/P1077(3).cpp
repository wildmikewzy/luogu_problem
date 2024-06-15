//摆花 解法3(滚动数组)
#include<iostream>
#include<cstdio>

using namespace std;
int n,m;
const int maxn=105;
const int mod=1e6+7;
int a[maxn];
int dp[maxn];     //表示前i种花拜访j盆的最大方案数字
int main(){
    freopen("C:\\Users\\ssyz__yw3k9a\\Desktop\\P1077_2.in","r",stdin);
    cin>>n>>m;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    dp[0]=1;
    for(int i=1;i<=n;i++){
        for(int j=m;j>=0;j--){
            for(int k=a[i];k>=1;k--){
                if(k<=j)
                    dp[j]=(dp[j]+dp[j-k])%mod;
            }
        }
    }
    cout<<dp[m]<<endl;
    return 0;
}