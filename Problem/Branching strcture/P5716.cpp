//月份天数
#include<iostream>
#include<cstdio>

using namespace std;
int main(){
    int y,m;
    scanf("%d%d",&y,&m);
    if((y%4==0 && y%100!=0) || (y%100==0 && y%400==0)){     //闰年
        if(m==1 || m==3 || m==5 || m==7 || m==8 || m==10 || m==12)
            printf("%d",31);
        else if(m==2)
            printf("%d",29);
        else
            printf("%d",30);
    }
    else{
        if(m==1 || m==3 || m==5 || m==7 || m==8 || m==10 || m==12)
            printf("%d",31);
        else if(m==2)
            printf("%d",28);
        else
            printf("%d",30);
    }
    return 0;
}