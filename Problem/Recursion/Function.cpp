//Function(successful)
#include<iostream>
#include<cstdio>
#include<cstring>
#define ll long long
#define maxn 24
ll f[maxn][maxn][maxn];
using namespace std;
void init(){
    memset(f,0,sizeof(f));
}
ll w(ll a,ll b,ll c){
    if(a<=0 || b<=0 || c<=0)
        return 1;
    else if(f[a][b][c]>0)
        return f[a][b][c];
    else if(a>20 || b>20 || c>20){
        f[a][b][c]= w(20,20,20);
    } 
    else if(a<b && b<c){
        f[a][b][c] = w(a,b,c-1)+w(a,b-1,c-1)-w(a,b-1,c);
    }
    else{
        f[a][b][c] = w(a-1,b,c)+w(a-1,b-1,c)+w(a-1,b,c-1)-w(a-1,b-1,c-1);
    }
    return f[a][b][c];
}
int main(){
    //freopen("C:\\Users\\ssyz__yw3k9a\\Desktop\\P1464 data\\P1464_1.in","r",stdin);
    //freopen("C:\\Users\\ssyz__yw3k9a\\Desktop\\P1464_2.out","w",stdout);
    ll a,b,c;
    cin>>a>>b>>c;
    while(!(a==-1 && b==-1 && c==-1)){
        int a_=a,b_=b,c_=c;
        if(a>20)    a=21;
        if(b>20)    b=21;
        if(c>20)    c=21;
        if(a_==-2147483648)
            printf("w(%lld, %d, %d) = %lld\n",a_,b_,c_,w(a,b,c));
        else
            printf("w(%d, %d, %d) = %lld\n",a_,b_,c_,w(a,b,c));
        cin>>a>>b>>c;
    }
    return 0;
}