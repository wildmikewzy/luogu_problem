//神奇的幻方
#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int main(){
    int n;
    cin>>n;
    int N[40][40];  //row,col
    memset(N,0,sizeof(N));
    int record[40*40][2];
    N[1][(1+n)/2]=1;
    record[1][0]=1,record[1][1]=(1+n)/2;  //记录数字1的位置，0代表行，1代表列
    for(int i=2;i<=n*n;i++){    //填数
        if(record[i-1][0]==1 && record[i-1][1]!=n){
            record[i][0]=n,record[i][1]=record[i-1][1]+1;
            N[record[i][0]][record[i][1]]=i;
        }
        else if(record[i-1][0]!=1 && record[i-1][1]==n){
            record[i][0]=record[i-1][0]-1,record[i][1]=1;
            N[record[i][0]][record[i][1]]=i;
        }
        else if(record[i-1][0]==1 && record[i-1][1]==n){
            record[i][0]=2,record[i][1]=n;
            N[record[i][0]][record[i][1]]=i;
        }
        else if(record[i-1][0]!=1 && record[i-1][1]!=n){
            if(N[record[i-1][0]-1][record[i-1][1]+1]==0)   //k-1右上方还未填数
            {
                record[i][0]=record[i-1][0]-1,record[i][1]=record[i-1][1]+1;
                N[record[i][0]][record[i][1]]=i;
            }
            else{
                record[i][0]=record[i-1][0]+1,record[i][1]=record[i-1][1];
                N[record[i][0]][record[i][1]]=i;
            }
        }   
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout<<N[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}