//珠心算测验
#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int main(){
    bool Judge[100000];
    memset(Judge,false,sizeof(Judge));
    int n,count=0;
    int number[100];
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>number[i];
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n-1;j++){
            for(int k=j+1;k<n;k++){
                if(number[j]+number[k]==number[i])
                    Judge[number[i]]=true;
            }
        }
    }
    for(int i=1;i<=10000;i++){
        if(Judge[i])
            count++;
    }
    cout<<count<<endl;
    return 0;
}