//Apples
#include<iostream>
#include<cstdio>

using namespace std;
int main(){
    int x;
    cin>>x;
    if(x==1 || x==0){
        cout<<"Today, I ate "<<x<<" "<<"apple."<<endl;
    }
    else
        cout<<"Today, I ate "<<x<<" "<<"apples."<<endl;
    return 0;
}