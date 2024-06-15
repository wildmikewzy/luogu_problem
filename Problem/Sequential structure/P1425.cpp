//小鱼的游泳时间
#include<iostream>
#include<cstdio>

using namespace std;
int main(){
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int hour=0,minute=0;
    hour=c-a;
    if(d-b < 0){
        minute+=(d-b+60);
        hour--;
    }
    else{
        minute+=d-b;
    }
    cout<<hour<<" "<<minute<<endl;
    return 0;
}