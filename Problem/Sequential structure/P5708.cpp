//三角形面积
#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main(){
    double a,b,c,p;
    cin>>a>>b>>c;
    p=(a+b+c)/2;
    printf("%.1f",sqrt(p*(p-a)*(p-b)*(p-c)));
    return 0;
}