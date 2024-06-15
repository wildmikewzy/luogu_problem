//最长连号
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,max_len=0,len=1;
    cin>>n;
    int a[1000];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=1;i<n;i++){
        if(a[i]==a[i-1]+1)
            len++;
        else{
            if(len>=max_len){
                max_len=len;
            }
            len=1;
        }
    }
    if(len>=max_len){
        max_len=len;
    }
    cout<<max_len<<endl;
    return 0;
}