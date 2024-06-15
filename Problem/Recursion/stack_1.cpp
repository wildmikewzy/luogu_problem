//栈(递归做法)
#include<iostream>
#include<cstdio>
#define ll long long
#define maxn 20
ll f[maxn][maxn];
using namespace std;

ll dfs(int i,int j){        //i 代表队列里剩下的，j 代表栈里剩下的(与卡特兰数相似)
    if(f[i][j])
        return f[i][j]; //记忆化搜索
    if(i==0)
        return 1;
    if(j>0)
        f[i][j]+=dfs(i,j-1);
    f[i][j]+=dfs(i-1,j+1);
    return f[i][j];
}
int main()
{
    int n;
    cin>>n;
    cout<<dfs(n,0);
    return 0;
}