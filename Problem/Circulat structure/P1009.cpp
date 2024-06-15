//阶乘之和
#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int s[101],a[101];
void mul(int m){
    int x=0;
    for(int i=100;i>=1;i--){
        a[i]=a[i]*m+x;
        x=a[i]/10;
        a[i]%=10;
    }
}
void Plus(int s[],int a[]){
    int x=0;
    for(int i=100;i>=1;i--){
        s[i]=s[i]+a[i]+x;
        x=s[i]/10;
        s[i]%=10;
    }

}
int main(){
    memset(s,0,sizeof(s));
    memset(a,0,sizeof(a));
    s[100]=0,a[100]=1;
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        mul(i);
        Plus(s,a);
    }
    int w=1;
    while(s[w]==0){
        w++;
    }
    for(int i=w;i<=100;i++){
        cout<<s[i];
    }
    cout<<endl;
    return 0;
}