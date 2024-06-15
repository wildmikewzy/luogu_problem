//栈(递推做法)
#include<iostream>
#include<cstdio>
#define ll long long
#define maxn 20
ll f[maxn][maxn];
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=0;i<=n;i++){
        f[0][i]=1;          //
    }
    for(int i=1;i<=n;i++){      //i 表示队列中的数字，j表示出栈的数字
        for(int j=i;j<=n;j++){
            if(i==j){
                f[i][j]=f[i-1][j];      //此时栈会为空，则只能入栈
            }
            else
                f[i][j]=f[i-1][j]+f[i][j-1];        //入栈出栈两种操作
        }
    }
    cout<<f[n][n]<<endl;
    return 0;
}