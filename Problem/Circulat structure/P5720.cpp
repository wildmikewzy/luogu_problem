//P5729 一尺之棰
#include<iostream>
#include<cstdio>

using namespace std;
int main(){
    long long a;
    int k=0;
    cin>>a;
    while(a>=1){
        a/=2;
        k++;
    }
    cout<<k<<endl;
    return 0;
}