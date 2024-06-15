//外星密码
#include<iostream>
#include<cstdio>

using namespace std;
string read(){
    char c;
    string s;
    while(cin>>c){      //不断读入字符，直至ctrl+z停止
        if(c=='['){
            int n;string s1;
            cin>>n;
            s1=read();      //核心递归
            while(n--)
                s+=s1;
        }
        else if(c==']'){
            return s;
        }
        else{
            s+=c;
        }
    }
    return s;
}
int main(){
    
    cout<<read()<<endl;
    return 0;
}