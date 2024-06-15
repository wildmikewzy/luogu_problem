//滑雪(回溯算法dfs+记忆化搜索)
#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
using namespace std;
int r,c;
const int dx[4]={0,0,1,-1};
const int dy[4]={1,-1,0,0};
int s[101][101];
int dfs(int x,int y,int g[][101]){
    if(s[x][y])
        return s[x][y];
        s[x][y]=1;      //该长度中包含本身
        for(int i=0;i<=3;i++){
        int xx=x+dx[i];
        int yy=y+dy[i];
        if(xx>0&&xx<=r && yy>0&&yy<=c && g[xx][yy]<g[x][y]){
                dfs(xx,yy,g);
                s[x][y]=max(s[x][y],s[xx][yy]+1);
        }
    }
        return s[x][y];
}
int main(){
    //freopen("C:\\Users\\ssyz__yw3k9a\\Desktop\\test.in","r",stdin);
    memset(s,0,sizeof(s));
    
    cin>>r>>c;
    int g[101][101];
    for(int i=1;i<=r;i++){
        for(int j=1;j<=c;j++){
            cin>>g[i][j];
        }
    }
    int answer=0;
    for(int i=1;i<=r;i++){
        for(int j=1;j<=c;j++)
            answer=max(answer,dfs(i,j,g));
    }
    cout<<answer<<endl;
    return 0;
}