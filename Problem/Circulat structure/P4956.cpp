//Davor
#include<iostream>
#include<cstdio>

using namespace std;
int main(){
    int n;
    cin>>n;
    int x,k,answer_x=0,answer_k=0;
    for(x=1;x<=100;x++){
        k=105;
        while(52*(7*x+21*k)>n){
            k--;
            if(52*(7*x+21*k)<n)
                break;
            else if(52*(7*x+21*k)==n){
                answer_k=k;
                answer_x=x;
                break;
            }
            if(k<=1)
                break;
        }
    }
    cout<<answer_x<<endl;
    cout<<answer_k<<endl;
    return 0;
}