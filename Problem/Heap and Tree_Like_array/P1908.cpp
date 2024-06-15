//逆序对
#include<iostream>
#include<cstdio>
#include<algorithm>
#define lowbit(x) (x&(-x))
#define ll long long
using namespace std;
const int maxn=5*1e5+5;
ll n,tree[maxn],ranks[maxn];
ll ans=0;
struct node{
    int val;
    int index;
};
node a[maxn];
inline int read(){
    int x=0,f=1;
    char ch=getchar();
    while(ch<'0' && ch>'9'){
        if(ch=='-')
            f=-1;
        ch=getchar();
    }
    while(ch>='0' && ch<='9'){
        x=x*10+ch-'0';
        ch=getchar();
    }
    return x*f;
}
bool comp(node x,node y){
    if(x.val==y.val)
        return x.index>y.index;
    return x.val>y.val;
}
void update(int x,int k){
    for(int i=x;i<=n;i+=lowbit(i)){
        tree[i]+=k;
    }
}
ll query(int x){
    ll ans=0;
    for(int i=x;i;i-=lowbit(i)){
        ans+=tree[i];
    }
    return ans;
}
int main(){
    //freopen("C:\\Users\\ssyz__yw3k9a\\Desktop\\P1908_6.in","r",stdin);
    n=read();
    for(int i=1;i<=n;i++){
        a[i].val=read();
        a[i].index=i;
    }
    sort(a+1,a+n+1,comp);
    for(int i=1;i<=n;i++){      //离散化
        ranks[a[i].index]=i;
    }
    
    for(int i=1;i<=n;i++){
        update(ranks[i],1);
        ans+=(query(ranks[i]-1));
    }
    printf("%d",ans);
    return 0;
}