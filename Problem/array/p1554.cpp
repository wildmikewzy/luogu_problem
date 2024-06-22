//梦中的统计
#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int word[10];       //用以统计每个数字出现次数
string Turn(int i){   //将整形数字转换成字符串
    string t,t1;
    while(i){
        t+=i%10+'0';
        i/=10;
    }
    //反转
    for(int i=t.length()-1;i>=0;i--){
        t1+=t[i];
    }
    return t1;
}
void Calculate(string w){
    for(int i=0;i<w.length();i++){
        word[w[i]-'0']++;
    }
}
int main(){
    int M,N;
    
    cin>>M>>N;
    for(int i=M;i<=N;i++){
        Calculate(Turn(i));
    }
    for(int i=0;i<=9;i++){
        cout<<word[i]<<" ";
    }
    cout<<endl;
    return 0;
}