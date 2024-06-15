//上学迟到
#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
double s,v,m;
int n,a,t,b;
int main(){
    cin>>s>>v;
    n=8*60+24*60;
    t=ceil(s/v)+10;
    n-=t;
    if(n>=24*60){
        n-=24*60;
    }
    b=n%60;
    a=n/60;
    if(a>=10){
        if(b>=10){
            cout<<a<<":"<<b<<endl;
        }
        else
            cout<<a<<":"<<"0"<<b<<endl;
    }
    else{
        if(b>=10){
            cout<<"0"<<a<<":"<<b<<endl;
        }
        else
            cout<<"0"<<a<<":"<<"0"<<b<<endl;
    }
    return 0;
}