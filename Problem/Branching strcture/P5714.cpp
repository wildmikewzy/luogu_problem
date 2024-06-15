//肥胖问题
#include<iostream>
#include<cstdio>

using namespace std;
int main(){
    double m,h;
    cin>>m>>h;
    double BMI=(m*1.0)/(h*h);
    if(BMI<18.5)
        cout<<"Underweight"<<endl;
    else if(BMI>=24){
        cout<<BMI<<endl;
        cout<<"Overweight"<<endl;
    }
    else
        cout<<"Normal"<<endl;
    return 0;
}