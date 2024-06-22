//开灯
#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
const int maxn=2e6+1;
bool light[maxn];
int main(){
    memset(light,false,sizeof(light));
    int n;      //n次操作
    cin>>n;
    while(n--){
        double a;
        int t;
        cin>>a>>t;
        for(int i=1;i<=t;i++){
            light[int(i*a)]=!light[int(i*a)];
        }
    }
    int k=1;
    while(k){
        if(light[k]){
            cout<<k<<endl;
            break;
        }
        k++;
    }
    return 0;
}