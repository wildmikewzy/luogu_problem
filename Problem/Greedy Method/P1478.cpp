//陶陶摘苹果(升级版)
#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
int n,s,a,b;        //苹果数量，力气，椅子高度，手伸直的最大长度b
const int maxn=5005;
struct apple{
    int x;  //hight
    int y;  //所需要的力气
};
apple A[maxn];

bool comp(apple d,apple e){
    return d.y<e.y;
}

int main(){
    cin>>n>>s;
    cin>>a>>b;
    for(int i=1;i<=n;i++){
        cin>>A[i].x>>A[i].y;
    }
    sort(A+1,A+n+1,comp);
    int ans=0;
    for(int i=1;i<=n;i++){
        if(a+b>=A[i].x){
            ans++;
            s-=A[i].y;
        }
        if(s<0){
            ans--;
            break;
        }
        else if(s==0)
            break;
    }
    cout<<ans<<endl;
    return 0;
}