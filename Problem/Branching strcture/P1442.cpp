//小玉家的电费
#include<iostream>
#include<cstdio>

using namespace std;
int main(){
    int electricity;
    double answer=0;
    scanf("%d",&electricity);
    if(electricity<=150)
        answer=0.4463*electricity;
    else if(electricity>150 && electricity<=400)
        answer=0.4463*150+(electricity-150)*0.4663;
    else if(electricity>400)
        answer=0.4463*150+0.4663*250+(electricity-400)*0.5663;
    printf("%.1lf",answer);
    return 0;
}