//数列求和
#include<iostream>
#include<cstdio>

using namespace std;
int main(){
    int n,answer=0;
    cin>>n;
    for(int i=1;i<=n;i++){
        answer+=i;
    }
    cout<<answer<<endl;
    return 0;
}