//旗鼓相当的对手
#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int Chi[1000],Math[1000],Eng[1000];
bool Judge(int i,int j){
    if((abs(Chi[i]-Chi[j])<=5) && (abs(Math[i]-Math[j])<=5) && (abs(Eng[i]-Eng[j])<=5) && (abs(Chi[i]+Math[i]+Eng[i]-Chi[j]-Math[j]-Eng[j])<=10))
        return true;
    return false;
}
int main(){
    int n,count=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>Chi[i]>>Math[i]>>Eng[i];
    }
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(Judge(i,j))
                count++;
        }
    }
    cout<<count<<endl;
    return 0;
}