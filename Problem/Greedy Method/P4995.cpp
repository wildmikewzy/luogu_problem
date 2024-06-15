//P4995 跳跳
#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cmath>
using namespace std;
int n;      //石头个数
const int maxn=305;
int h[maxn];
int main(){
    long long ans=0;
    cin>>n;
    h[0]=0;
    for(int i=1;i<=n;i++){
        cin>>h[i];
    }
    sort(h,h+n+1);
    int l=0,r=n;
    int k=0;        //用来判断从左跳到右边，还是从右跳到左边
    while(l<r){
        if(k%2==0){     //从左边跳到右边
            ans+=(pow(h[r]-h[l],2));
            l++;
            k++;
        }
        else{
            ans+=(pow(h[r]-h[l],2));    //从右边跳到左边
            r--;
            k++;
        }
    }
    cout<<ans<<endl;
    return 0;
}