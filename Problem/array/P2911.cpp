//Bovine Bones G
#include<iostream>
#include<cstdio>

using namespace std;
int Judge[100];
int main(){
    int s1,s2,s3;
    cin>>s1>>s2>>s3;
    for(int i=1;i<=s1;i++){
        for(int j=1;j<=s2;j++){
            for(int k=1;k<=s3;k++){
                Judge[i+j+k]++;
            }
        }
    }
    int maxn=0,index=0;
    for(int i=1;i<=81;i++){
        if(maxn<Judge[i]){
            maxn=Judge[i];
            index=i;
        }
    }
    cout<<index<<endl;
    return 0;
}