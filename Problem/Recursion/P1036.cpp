//选数
#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<vector>
#include<algorithm>
using namespace std;
const int maxn=1e7+5;
int n,k,answer=0;
bool isPrime[maxn];

void createSieve(){
    isPrime[1]=false;
    isPrime[2]=true;
    for(int i=2;i<=sqrt(maxn);i++){
        if(isPrime[i]){
            for(int j=i*i;j<=maxn;j+=i){
                isPrime[j]=false;
            }
        }
    }
}
void init(){
    memset(isPrime,true,sizeof(isPrime));
    createSieve();
}
int getSum(vector<int> l){
    int ans=0;
    for(auto m:l){
        ans+=m;
    }
    return ans;
}
void dfs(int start,vector<int> l,vector<int> &temporary){
    if(start>=n || temporary.size()==k){
        if(temporary.size()==k){
            if(isPrime[getSum(temporary)]){
                answer++;
            }
        }
        return;
    }
    for(int i=start;i<n;i++){
        temporary.push_back(l[i]);
        start++;
        dfs(start,l,temporary);
        temporary.pop_back();
    }
}
int main(){
    //freopen("C:\\Users\\ssyz__yw3k9a\\Desktop\\P1036_1.in","r",stdin);
    init();
    cin>>n>>k;
    vector<int> l(n);
    for(int i=0;i<n;i++)
        cin>>l[i];
    vector<int> temporary;
    dfs(0,l,temporary);
    cout<<answer<<endl;
    return 0;
}