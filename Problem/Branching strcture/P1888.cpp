//三角函数
#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
int gcd(int a,int b){
    while(b>0){
        int r=a%b;
        a=b;
        b=r;
    }
    return a;
}
int main(){
    int a,b,c,maxn,minn;
    cin>>a>>b>>c;
    maxn=max(a,max(b,c));
    minn=min(a,min(b,c));
    int n=gcd(maxn,minn);
    cout<<minn/n<<"/"<<maxn/n<<endl;
    return 0;
}