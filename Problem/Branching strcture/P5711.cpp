//闰年判断
#include<iostream>
#include<cstdio>

using namespace std;
int main(){
    int year;
    scanf("%d",&year);
    if(year%4==0 && year%100!=0){
        cout<<1<<endl;
    }
    else if(year%4==0 && year%100==0 && year%400==0){
        cout<<1<<endl;
    }
    else
        cout<<0<<endl;
    return 0;
}