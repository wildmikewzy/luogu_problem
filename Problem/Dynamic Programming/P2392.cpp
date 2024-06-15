//kkksc03考前临时抱佛脚(01背包问题的变式训练)
#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
#define forr(i,a,b) for(int i=(a);i<=(b);i++)
int totalTime(int *t,int m){
    int total=0;
    for(int i=1;i<=m;i++){
        total+=t[i];
    }
    return total;
}
int DP(int *t,int m){       //m表示t数组包含的数字，即需要解决的问题数量
    int time=totalTime(t,m);
    int dp[time/2+1];
    memset(dp,0,sizeof(dp));
    for(int i=1;i<=m;i++){
        for(int j=time/2;j>=t[i];j--){
            dp[j]=max(dp[j],dp[j-t[i]]+t[i]);
        }
    }
    return max(dp[time/2],time-dp[time/2]);
}
int main(){
    //freopen("C:\\Users\\ssyz__yw3k9a\\Desktop\\test.in","r",stdin);
    int answer=0;
    int s1,s2,s3,s4;
    cin>>s1>>s2>>s3>>s4;
    int a[s1+1],b[s2+1],c[s3+1],d[s4+1];
    forr(i,1,s1)
        cin>>a[i];
    forr(i,1,s2)
        cin>>b[i];
    forr(i,1,s3)
        cin>>c[i];
    forr(i,1,s4)
        cin>>d[i];
    answer=DP(a,s1)+DP(b,s2)+DP(c,s3)+DP(d,s4);
    cout<<answer<<endl;
    return 0;
}