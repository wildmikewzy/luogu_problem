//部分背包问题
#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
struct coin{
    int m,v;
    double ave;
};
int n,t;        //金币堆数,背包承重量
const int maxn=105;
coin s[maxn];
bool comp(coin a,coin b){
    return a.ave>b.ave;
}
inline int read(){
    int x=0,f=1;
    char ch=getchar();
    while(ch<'0' || ch>'9'){
        if(ch=='-'){
            f=-1;
        }
        ch=getchar();
    }
    while(ch>='0' && ch<='9'){
        x=x*10+ch-'0';
        ch=getchar();
    }
    return x*f;
}
int main(){
    cin>>n>>t;
    for(int i=1;i<=n;i++){
        cin>>s[i].m>>s[i].v;    //总重量，总价值
        s[i].ave=double(s[i].v)/double(s[i].m);
    }
    sort(s+1,s+n+1,comp);
    double ans=0.0;
    for(int k=1;k<=n;k++){
        if(t>=s[k].m){
            ans+=s[k].v;
            t-=s[k].m;
        }
        else{       //需要进行分割
            ans+=(double(t)/s[k].m)*s[k].v;
            break;
        }
    }
    printf("%.2lf",ans);
    return 0;
}