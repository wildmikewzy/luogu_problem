//数字反转
#include<iostream>
#include<cstdio>

using namespace std;
int main(){
    string s;
    cin>>s;
    for(int i=s.length()-1;i>=0;i--){
        cout<<s[i];
    }
    return 0;
}