//金币
#include<iostream>
#include<cstdio>

using namespace std;
int main(int argc, char const *argv[])
{
    int k;
    cin>>k;
    int m=1,remain;
    int answer=0;
    int i;
    for(i=1;i<=k;i+=m){
        answer+=m*m;
        m++;
    }
    i-=m;
    remain=k-i;
    answer+=m*remain;
    cout<<answer<<endl;
    return 0;
}
