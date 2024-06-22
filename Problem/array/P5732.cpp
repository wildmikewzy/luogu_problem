//杨辉三角形
#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int a[21][21];
int main(){
    memset(a,0,sizeof(a));
    int n;  //输出杨辉三角形的前n行
    cin>>n;
    a[1][1]=1;
    //填表
    for(int i=2;i<=n;i++){      //从第二行开始
        for(int j=1;j<=i;j++){
            a[i][j]=a[i-1][j]+a[i-1][j-1];
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}