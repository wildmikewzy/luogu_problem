//小A点菜
#include<iostream>
#include<cstdio>

using namespace std;
#define maxn 105
int a[maxn],f[maxn][10010];
int main(){
    int m,n;
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(j<a[i]){
                f[i][j]+=f[i-1][j];
            }
            else if(j==a[i])
                f[i][j]+=f[i-1][j]+1;
            else
                f[i][j]+=f[i-1][j]+f[i-1][j-a[i]];
        }
    }
    cout<<f[n][m]<<endl;
    return 0;
}