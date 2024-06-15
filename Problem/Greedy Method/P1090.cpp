//合并果子
#include<iostream>
#include<cstdio>
#include<queue>
#include<vector>
#include<algorithm>
using namespace std;
priority_queue<int,vector<int>,greater<int>> q;
const int maxn=1e4+5;
int n;
int a[maxn];
int main(){
    long long ans=0;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a[i];
        q.push(a[i]);
    }
    while(q.size()>1){
        int a,b;
        a=q.top();
        q.pop();
        b=q.top();
        q.pop();
        ans+=(a+b);
        q.push(a+b);
    }
    cout<<ans<<endl;
    return 0;
}