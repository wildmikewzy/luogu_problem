//Apples Prologue/苹果和虫子
#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main(){
    int m,t;
    cin>>m>>t;
    int s;
    cin>>s;
    if(m==0||t==0){
        cout<<0<<endl;
        return 0;
    }
    int remain=0;
    if(s%t==0)
        remain=m-(s/t);
    else
        remain=m-(s/t)-1;
    if(remain>=0)
        cout<<remain<<endl;
    else
        cout<<0<<endl;
    return 0;
}