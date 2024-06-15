//数字反转
#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
int main(){
    string N,O_N;
    int k=0;
    cin>>N;
    if(N[0]=='-'){
        cout<<'-';
        for(int i=N.length()-1;i>=1;i--){
            O_N=O_N+N[i];
        }
        if(O_N[0]=='0')
            O_N.erase(0,O_N.find_first_not_of('0'));
    }
    else if(N[0]=='0' && N.length()==1)
        O_N='0';
    else{
        for(int i=N.length()-1;i>=0;i--){
            O_N=O_N+N[i];
        }
        if(O_N[0]=='0')
            O_N.erase(0,O_N.find_first_not_of('0'));
    }
    cout<<O_N<<endl;
    return 0;
}