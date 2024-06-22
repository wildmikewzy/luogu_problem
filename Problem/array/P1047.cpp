//校门外的树
#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int main(){
    int l,m,count=0;
    cin>>l>>m;
    int u[m],v[m];
    bool tree[l+1];
    memset(tree,false,sizeof(tree));
    for(int i=0;i<m;i++){
        cin>>u[i]>>v[i];
        for(int j=u[i];j<=v[i];j++){
            tree[j]=true;
        }
    }
    for(int i=0;i<=l;i++){
        if(tree[i]==false)  
            count++;
    }
    cout<<count<<endl;
    return 0;
}