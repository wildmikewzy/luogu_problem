//最大食物链计数
#include<iostream>
#include<cstdio>
#include<cstring>
#include<vector>
#include<queue>

using namespace std;
const int mod=80112002;
const int maxn=5*1e5+1;
long long deg[maxn],out[maxn];
long long dp[maxn];
long long n,m;
vector<vector<int>> s;
queue<int> q;
void init(){
    memset(deg,0,sizeof(deg));
    memset(dp,0,sizeof(dp));
}
void topoSort(){        //拓扑排序(用队列实现)
    for(int i=1;i<=n;i++){
        if(deg[i]==0){
            q.push(i);
            dp[i]=1;
        }
    }
    while(!q.empty()){
        for(auto m:s[q.front()]){
            deg[m]--;
            dp[m]=(dp[m]+dp[q.front()])%mod;
            if(deg[m]==0)
                q.push(m);
        }
        q.pop();
    }
}
int main(){
    init();
    //freopen("C:\\Users\\ssyz__yw3k9a\\Desktop\\P4017_1.in","r",stdin);

    cin>>n>>m;  //n表示生物种类,m表示被吃关系数
    s.resize(n+1);
    for(int i=1;i<=m;i++){
        int a,b;
        cin>>a>>b;      //表示被吃的生物a,和吃a的生物b
        s[a].push_back(b);
        deg[b]++;
        out[a]++;
    }
    topoSort();
    long long ans=0;
    for(int i=1;i<=n;i++){
        if(out[i]==0)
            ans+=dp[i];
    }
    cout<<ans%mod<<endl;
    return 0;
}