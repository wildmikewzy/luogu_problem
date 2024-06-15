//P1055[NOIP2008普及组]ISBN号码
#include<iostream>
#include<cstdio>
#include<cstring>

using namespace std;
int main(int argc, char const *argv[])
{
    string s;
    cin>>s;
    int number[10];
    int k=0,answer=0;
    for(int i=0;i<=10;i++){
        if(i==1 || i==5)
            continue;
        else
            number[++k]=s[i]-'0';
    }
    for(int i=1;i<=9;i++)
        answer+=number[i]*i;
    char last=answer%11+'0';
    if(last==10+'0')
        last='X';
    if(last==s[12])
        cout<<"Right"<<endl;
    else{
        for(int i=0;i<12;i++)
            cout<<s[i];
        cout<<last<<endl;
    }
    return 0;
}
