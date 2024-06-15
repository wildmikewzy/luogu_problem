//大象喝水
#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main(){
    double h,r;
    double v;
    cin>>h>>r;
    v=3.14*r*r*h;
    cout<<ceil(20000/v)<<endl;
    return 0;
}