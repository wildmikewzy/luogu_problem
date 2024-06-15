//打分
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    double a[n],maxn=0,minn=10,sum=0.0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(maxn<=a[i]){
            maxn=a[i];
        }
        if(minn>=a[i]){
            minn=a[i];
        }
    }
    for(int i=0;i<n;i++){
        sum+=a[i];
    }
    printf("%.2lf",(sum-maxn-minn)/(n-2));
    return 0;
}