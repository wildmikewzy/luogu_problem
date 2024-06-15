//级数求和
#include<iostream>
#include<cstdio>

using namespace std;

int main(int argc, char const *argv[])
{
    int k;
    cin>>k;
    long long n=1;
    double Sn;
    for(Sn=1;Sn<=k;n++,Sn+=double(1.0/n));
    cout<<n<<endl;
    return 0;
}
