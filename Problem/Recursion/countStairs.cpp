//数楼梯子(需要用到高精度)
#include<iostream>
#include<cstdio>
#define maxn 5010
using namespace std;
int f[maxn][maxn];
int len=1;
void countStair(int k){
    for(int i=1;i<=len;i++){
        f[k][i]=f[k-1][i]+f[k-2][i];
    }
    //进位
    for(int i=1;i<=len;i++){
        if(f[k][i]>=10){
            f[k][i+1]+=f[k][i]/10;
            f[k][i]%=10;
        }
        if(f[k][len+1])
            len++;
    }
}
int main()
{
    f[1][1]=1;
    f[2][1]=2;
    int n;
    cin>>n;
    for(int i=3;i<=n;i++){
        countStair(i);
    }
    for(int i=len;i>=1;i--){
        cout<<f[n][i];
    }
    return 0;
}