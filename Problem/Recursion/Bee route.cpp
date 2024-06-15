//蜜蜂路线
#include<iostream>
#include<cstdio>
#include<cstring>
#define maxn 1010
using namespace std;
int f[maxn][maxn];
int len=1;
void init(){
    memset(f,0,sizeof(f));
}
void addition(int k){
    for(int i=1;i<=len;i++){
        f[k][i]+=f[k-1][i]+f[k-2][i];
    }
    //进位
    for(int i=1;i<=len;i++){
        if(f[k][i]>9){
            f[k][i+1]+=f[k][i]/10;
            f[k][i]%=10;
        }
        if(f[k][len+1])
            len++;
    }
}
int main(){
    init();
    int m,n;
    cin>>m>>n;
    f[m][len]=1;
    f[m+1][len]=1;
    for(int i=m+2;i<=n;i++){
        addition(i);
    }
    for(int i=len;i>=1;i--){
        cout<<f[n][i];
    }
    return 0;
}