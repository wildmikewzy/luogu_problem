//快速幂
#include<iostream>
#include<cstdio>

using namespace std;
long long quickPow(int a,int b,int p){
    long long ans=1,base=a;
    while(b>0){
        if(b&1){        //b%2==1
            ans=base*ans%p;
        }
        base=base*base%p;
        b>>=1;
    }
    return ans%p;
}
int main(){
    long long a,b,p;
    cin>>a>>b>>p;
    long long ans=quickPow(a,b,p);
    cout<<a<<"^"<<b<<" mod "<<p<<"="<<ans<<endl;
    return 0;
}