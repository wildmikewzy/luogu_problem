//三角形分类
#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
bool isTriangle(int a,int b,int c){
    if(a+b<=c)
        return false;
    return true;
}
bool isRight_triangle(int a,int b,int c){
    if(a*a+b*b==c*c)
        return true;
    return false;
}
bool isAcute_triangle(int a,int b,int c){
    if(a*a+b*b>c*c)
        return true;
    return false;
}
bool isObtuse_triangle(int a,int b,int c){
    if(a*a+b*b<c*c)
        return true;
    return false;
}
bool isIsosceles_triangle(int a,int b,int c){
    if(a==b || b==c || a==c)
        return true;
    return false;
}
bool isEquilateral_triangle(int a,int b,int c){
    if(a==b && b==c && a==c)
        return true;
    return false;
}
int main(){
    int side[4],a,b,c;
    for(int i=1;i<=3;i++)
        cin>>side[i];
    sort(side+1,side+4);
    a=side[1],b=side[2],c=side[3];
    if(!isTriangle(a,b,c)){
        cout<<"Not triangle"<<endl;
        return 0;
    }
    else{
        if(isRight_triangle(a,b,c))
            cout<<"Right triangle"<<endl;
        else if(isAcute_triangle(a,b,c))
            cout<<"Acute triangle"<<endl;
        else if(isObtuse_triangle(a,b,c))
            cout<<"Obtuse triangle"<<endl;
        if(isIsosceles_triangle(a,b,c))
            cout<<"Isosceles triangle"<<endl;
        if(isEquilateral_triangle(a,b,c))
            cout<<"Equilateral triangle"<<endl;
    }
    return 0;
}