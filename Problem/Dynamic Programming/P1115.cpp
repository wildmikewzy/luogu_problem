//最大子段和
#include<iostream>
#include<cstdio>
#include<cmath>
#include<cstring>
using namespace std;
int main(){
    int n;
    cin>>n;
    int b[n+1];
    for(int i=1;i<=n;i++){
        int a;
        cin>>a;
        if(i==1)
            b[i]=a;
        else{
            b[i]=max(b[i-1]+a,a);
        }
    }
    int maxn=-1e6;
    for(int i=1;i<=n;i++){
        maxn=max(maxn,b[i]);
    }
    cout<<maxn<<endl;
    return 0;
}