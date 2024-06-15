//找最小值
#include<iostream>
#include<cstdio>

using namespace std;
int main(){
    int n,number,minn=1000000;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>number;
        if(number<minn)
            minn=number;
    }
    cout<<minn<<endl;
    return 0;
}