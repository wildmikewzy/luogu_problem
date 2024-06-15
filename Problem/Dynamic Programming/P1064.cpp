//金明的预算方案(01背包问题变式)
#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int n,m;        //总钱数和希望购买的物品个数m
const int maxn=4*1e4+5;
int mw[61],mv[61],m_f[61],fw[61][3],fv[61][3];
int dp[maxn];
int main(){
    memset(dp,0,sizeof(dp));
    cin>>n>>m;
    //输入数据并进行预处理 
    for(int i=1;i<=m;i++){
        int v,p,q;
        cin>>v>>p>>q;
        if(!q){     //如果是主件
            mw[i]=v;
            mv[i]=v*p;
        }
        else{   //是附件
            m_f[q]++;
            fw[q][m_f[q]]=v;
            fv[q][m_f[q]]=v*p;
        }
    }
    //动态规划(01背包问题变式)
    for(int i=1;i<=m;i++){
        for(int j=n;j>=mw[i];j--){
            dp[j]=max(dp[j],dp[j-mw[i]]+mv[i]);     //只选择主件
            if(j>=mw[i]+fw[i][1])
                dp[j]=max(dp[j],dp[j-mw[i]-fw[i][1]]+mv[i]+fv[i][1]);       //选择主件+附件1
            if(j>=mw[i]+fw[i][2])
                dp[j]=max(dp[j],dp[j-mw[i]-fw[i][2]]+mv[i]+fv[i][2]);       //选择主件+附件2
            if(j>=mw[i]+fw[i][1]+fw[i][2])
                dp[j]=max(dp[j],dp[j-mw[i]-fw[i][1]-fw[i][2]]+mv[i]+fv[i][1]+fv[i][2]);
        }
    }
    cout<<dp[n]<<endl;
    return 0;
}