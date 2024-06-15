//求极差/最大跨度值
#include<iostream>
#include<cstdio>

using namespace std;
int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
    int a[n];
    int maxn=-1001,minn=1001;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(maxn<a[i])
            maxn=a[i];
        if(minn>a[i])
            minn=a[i];
    }
    cout<<maxn-minn<<endl;
    return 0;
}
