//津津的储蓄计划
#include<iostream>
#include<cstdio>

using namespace std;
int main(){
    int a[13],temporary=0,credit=0;
    for(int i=1;i<=12;i++){
        cin>>a[i];
    }
    for(int i=1;i<=12;i++){
        temporary+=300-a[i];
        if(temporary>100){
            credit+=(temporary/100)*100;
            temporary%=100;
        }
        else if(temporary<0){
            cout<<"-"<<i<<endl;
            return 0;
        }
    }
    cout<<double(credit)*1.2+temporary<<endl;
    return 0;
}