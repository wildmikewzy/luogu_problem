//爱与愁的心痛
#include<iostream>
#include<cstdio>

using namespace std;
int main(){
    int n,m,minn=1e6;
    cin>>n>>m;
    int a[3001];
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    if(n==m){
        int sum=0;
        for(int i=1;i<=n;i++)
            sum+=a[i];
        cout<<sum<<endl;
        return 0;
    }
    for(int i=1;i<=n-m;i++){        //从第i位开始连续m个刺痛值
        int sum=0;
        for(int j=i;j<=i+m-1;j++){
            sum+=a[j];
        }
        if(sum<minn){
            minn=sum;
        }
    }
    cout<<minn<<endl;
    return 0;
}