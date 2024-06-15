//聪明的质检员(二分法+前缀和优化)
//注意开long long
//十年OI一场空，不开longlong见祖宗！
#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cstring>
#include<cmath>
using namespace std;
const int maxn=200005;
int n,m,mx=-1,mn=2147483547;
int w[maxn],v[maxn],l[maxn],r[maxn];
long long s,sum,ans=9223372036854775807;
long long ps1[maxn],ps2[maxn];
bool check(int W){
    memset(ps1,0,sizeof(ps1));
    memset(ps2,0,sizeof(ps2));
    //构造前缀和
    for(int i=1;i<=n;i++){
        if(w[i]>=W){
            ps1[i]=ps1[i-1]+1;
            ps2[i]=ps2[i-1]+v[i];
        }
        else{
            ps1[i]=ps1[i-1];
            ps2[i]=ps2[i-1];
        }
    }
    //计算y的值
    long long y=0;
    for(int i=1;i<=m;i++){
        y+=(ps1[r[i]]-ps1[l[i]-1])*(ps2[r[i]]-ps2[l[i]-1]);
    }
    sum=llabs(y-s);
    if(y>s)
        return true;
    else 
        return false;
    
}
int main(){
    //freopen("C:\\Users\\ssyz__yw3k9a\\Desktop\\P1314_2.in","r",stdin);
    cin>>n>>m>>s;   //矿石个数，区间个数，标准值
    for(int i=1;i<=n;i++){
        cin>>w[i]>>v[i];
        mx=max(mx,w[i]);
        mn=min(mn,w[i]);
    }
    int left=mn-1,right=mx+2,mid;
    for(int i=1;i<=m;i++){
        cin>>l[i]>>r[i];
    }
    while(left<=right){
        mid=(left+right)>>1;
        if(check(mid))
            left=mid+1;
        else right=mid-1;
        if(sum<ans)
            ans=sum;
    }
    printf("%lld",ans);
    return 0;
}