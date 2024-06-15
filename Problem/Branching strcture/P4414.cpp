//[COCI2006-2007#2] ABC
#include<iostream>
#include<cstdio>
#include<algorithm>
#include<map>
using namespace std;
int main(){
    map<char,int> answer; 
    int A,B,C;
    char c1,c2,c3;
    cin>>A>>B>>C;
    cin>>c1>>c2>>c3;
    if(A>B)
        swap(A,B);
    if(A>C)
        swap(A,C);
    if(B>C)
        swap(B,C);
    answer['A']=A;
    answer['B']=B;
    answer['C']=C;
    printf("%d %d %d",answer[c1],answer[c2],answer[c3]);
    return 0;
}