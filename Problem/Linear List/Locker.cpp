//寄包柜
#include<iostream>
#include<cstdio>
#include<map>

using namespace std;
#define ll long long
int maxn=1e6;
map<ll,int> lock;

int main()
{
    int n,q;
    cin>>n>>q;
    while(q--){
        ll choice,x,y,k;
        cin>>choice>>x>>y;
        if(choice==1){
            cin>>k;
            lock[x*maxn+y]=k;
        }
        else{
            cout<<lock[x*maxn+y]<<endl;
        }
    }
    return 0;
}