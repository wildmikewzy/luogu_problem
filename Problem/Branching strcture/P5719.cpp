//数的性质
#include<iostream>
#include<cstdio>

using namespace std;
int main(){
    int x;
    scanf("%d",&x);
    int xA,Uim,eightCourage,sister;
    if(x%2==0 && x>4&&x<=12){
        xA=1;
        Uim=1;
        eightCourage=0;
        sister=0;
    }
    else if(!(x%2==0) && x>4&&x<=12){
        xA=0;
        Uim=1;
        eightCourage=1;
        sister=0;
    }
    else if(x%2==0 && !(x>4&&x<=12)){
        xA=0;
        Uim=1;
        eightCourage=1;
        sister=0;
    }
    else{
        xA=0;
        Uim=0;
        eightCourage=0;
        sister=1;
    }
    printf("%d %d %d %d",xA,Uim,eightCourage,sister);
    return 0;
}