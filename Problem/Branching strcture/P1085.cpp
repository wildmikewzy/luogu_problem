//不高兴的津津
#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int main(){
    int a[8][3];
    int mark[8];
    for(int i=1;i<=7;i++){
        cin>>a[i][1]>>a[i][2];
        if(a[i][1]+a[i][2]>8){
            mark[i]=a[i][1]+a[i][2];
        }
        else
            mark[i]=0;
    }
    int day=1;
    for(int i=2;i<=7;i++){
        if(mark[i]>mark[day]){
            day=i;
        }
    }
    if(mark[day]==0)
        cout<<0;
    else
        cout<<day<<endl;
    return 0;
}