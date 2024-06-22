//压缩技术(续集版)
#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main(){
    char dot;
    int p=0;
    int matrix[200*200+1];
    //bool flag=false;
    while(cin>>dot){
        ++p;
        matrix[p]=dot-'0';
    }
    int n=sqrt(p);
    cout<<n<<" ";
    int outNumber=1;
    if(matrix[1]!=0)
        cout<<0<<" ";
    for(int i=2;i<=p;i++){
        if(matrix[i]==matrix[i-1]){
            outNumber++;
        }
        else{
            cout<<outNumber<<" ";
            outNumber=1;
        }
    }
    cout<<outNumber<<endl;
    return 0;
}