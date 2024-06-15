//买铅笔
#include<iostream>
#include<cstdio>
using namespace std;
int main(){
    int n;int minPay=1e8;
    int number[4],price[4],pay[4];
    cin>>n;
    for(int i=1;i<=3;i++){
        cin>>number[i]>>price[i];
        pay[i]=((n%number[i]==0)? (n/number[i]):(n/number[i])+1)*price[i];
        if(pay[i]<minPay)
            minPay=pay[i];
    }
    cout<<minPay<<endl;
    return 0;
}