//月落乌啼算钱(斐波那契数列)
#include<iostream>
#include<cstdio>

using namespace std;
long long a[49];
long long Fib(int n){
    a[1]=1;
    a[2]=1;
    for(int i=3;i<=n;i++){
        a[i]=a[i-1]+a[i-2];
    }
    return a[n];
}
int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
    cout<<Fib(n)<<".00"<<endl;
    return 0;
}
