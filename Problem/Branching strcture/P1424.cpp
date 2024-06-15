//小鱼的航程(改进版)
#include<iostream>
#include<cstdio>

using namespace std;
int main(){
    int x,n,workday=0;
    scanf("%d%d",&x,&n);
    for(int i=0;i<n;i++){
        if(((x+i)%7==6) || ((x+i)%7==0)){
            continue;
        }
        else
            workday++;
    }
    cout<<250*workday<<endl;
    return 0;
}