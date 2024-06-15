//P5721数字直角三角形
#include<iostream>
#include<cstdio>

using namespace std;
int main(){
    int n;
    cin>>n;
    int k=1;
    for(int i=n;i>=1;i--){
        for(int j=1;j<=i;j++){
            if(k<10){
                cout<<0<<k;
            }
            else
                cout<<k;
            k++;
        }
        cout<<endl;
    }
    return 0;
}