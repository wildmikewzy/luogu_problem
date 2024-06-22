//彩票摇奖
#include<iostream>
#include<cstdio>

using namespace std;

int award[8],get[7],make[1000][7];
int Judge(int i){
    int count=0;
    for(int j=0;j<7;j++){
        for(int k=0;k<=6;k++){
            if(make[i][j]==get[k]){
                count++;
                break;
            }
        }
    }
    return count;
}
int main(){
    int n;
    cin>>n;
    for(int i=0;i<=6;i++){
        cin>>get[i];        //中奖号码
    }
    for(int i=1;i<=n;i++){
        cin>>make[i][0]>>make[i][1]>>make[i][2]>>make[i][3]>>make[i][4]>>make[i][5]>>make[i][6];
        award[8-Judge(i)]++;
    }
    for(int i=1;i<=7;i++)
        cout<<award[i]<<" ";
    cout<<endl;
    return 0;
}