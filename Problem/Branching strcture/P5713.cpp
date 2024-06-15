//洛谷团队系统
#include<iostream>
#include<cstdio>

using namespace std;
int main(){
    int n;
    cin>>n;
    int local,luogu;
    local=n*5;
    luogu=n*3+11;
    if(local<luogu)
        cout<<"Local";
    else
        cout<<"Luogu";
    return 0;
}