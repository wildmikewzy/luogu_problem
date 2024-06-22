//压缩技术
#include<iostream>
#include<cstdio>
using namespace std;
int main(){
    int n,num,total=0;
    cin>>n; //N*N=交替的各数字之和
    int matrix[201][201];
    bool flag=false;        //false代表填入数字为0，true代表填入数字为1
    int x=1,y=1;
    while(total<n*n){
        cin>>num;
        total+=num;
        while(num--){
            matrix[x][y]=(flag==false) ? 0:1;
            y++;
            if(y>n){
                x++;
                y=1;
            }
        }
        flag=!flag;
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout<<matrix[i][j];
        }
        cout<<endl;
    }
    return 0;
}