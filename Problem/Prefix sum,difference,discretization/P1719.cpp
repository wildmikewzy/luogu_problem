//最大加权矩形
#include<iostream>
#include<cstdio>
#include<cmath>
#include<cstring>
using namespace std;
const int maxn=121;
int matrix[maxn][maxn];
int ps[maxn][maxn];
int n;
int getSum(int i,int j,int x,int y){    //求(i,j)到(x,y)这一段矩阵的区间和
    if(i==0 && j==0)
        return ps[x][y];
    int ans=0;
    ans=ps[x][y]-ps[i-1][y]-ps[x][j-1]+ps[i-1][j-1];
    return ans;
}
int main(){
    //memset(ps,0,sizeof(ps));
    //freopen("C:\\Users\\ssyz__yw3k9a\\Desktop\\test.in","r",stdin);
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>matrix[i][j];
        }
    }
    //预处理
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==0 && j==0){
                ps[i][j]=matrix[i][j];
            }
            else if(i==0){
                ps[i][j]=matrix[i][j]+ps[i][j-1];
            }
            else if(j==0){
                ps[i][j]=matrix[i][j]+ps[i-1][j];
            }
            else{
                ps[i][j]+=ps[i-1][j]+ps[i][j-1]-ps[i-1][j-1]+matrix[i][j];
            }
        }
    }
    int ans=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            for(int x=i;x<n;x++){
                for(int y=j;y<n;y++){
                    if(getSum(i,j,x,y)>ans){
                        ans=getSum(i,j,x,y);
                    }
                }
            }
        }
    }
    cout<<ans<<endl;
    return 0;
}