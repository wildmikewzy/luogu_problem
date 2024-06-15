//ST table 模板
#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int n,m;
const int maxn=1e5+5;
int Max[maxn][21];
inline int read(){
    int x=0,f=1;
    char ch=getchar();
    while(ch<'0' || ch>'9'){
        if(ch=='-')
            f=-1;
            ch=getchar();
    }
    while(ch>='0' && ch<='9'){
        x=10*x+ch-'0';
        ch=getchar();
    }
    return x*f;
}
int query(int l,int r){
    int k=log2(r-l+1);
    return max(Max[l][k],Max[r-(1<<k)+1][k]);
}
int main(){
    n=read(),m=read();
    for(int i=1;i<=n;i++){
        Max[i][0]=read();
    }
    //动态规划dp进行ST表的预处理
    for(int j=1;j<=21;j++){
        for(int i=1;i+(1<<j)-1<=n;i++){
            Max[i][j]=max(Max[i][j-1],Max[i+(1<<(j-1))][j-1]);
        }
    }
    for(int i=1;i<=m;i++){
        int l=read(),r=read();
        printf("%d\n",query(l,r));
    }
}