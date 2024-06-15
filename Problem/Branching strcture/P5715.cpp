//三位数排序
#include<iostream>
#include<cstdio>

using namespace std;
int main(int argc, char const *argv[])
{
    int a,b,c;
    cin>>a>>b>>c;
    int temp;
    if(a>b){
        temp=a;
        a=b;
        b=temp;
    }
    if(a>c){
        temp=a;
        a=c;
        c=temp;     //经过两次比较把最小的数调到最前面
    }
    if(b>c){
        temp=b;
        b=c;
        c=temp;
    }
    cout<<a<<" "<<b<<" "<<c<<endl;
    return 0;
}
