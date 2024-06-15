//小玉在游泳
#include<iostream>
#include<cstdio>

using namespace std;
int main(int argc, char const *argv[])
{
    double s;
    cin>>s;
    double x=2.0,d=2.0;
    int ans=1;
    while(x<s){
        ans++;
        d=d*0.98;
        x+=d;
    }
    cout<<ans<<endl;
    return 0;
}
