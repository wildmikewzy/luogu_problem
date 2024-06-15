//询问学号
#include<iostream>
#include<cstdio>

using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int number[n+1],ask[m+1];
    for(int i=1;i<=n;i++){
        cin>>number[i];
    }
    for(int i=1;i<=m;i++){
        cin>>ask[i];
    }
    for(int i=1;i<=m;i++)
        cout<<number[ask[i]]<<endl;
    return 0;
}