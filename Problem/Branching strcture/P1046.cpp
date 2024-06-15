//陶陶摘苹果
#include<iostream>
#include<cstdio>

using namespace std;
int main(){
    int a[10],n,answer=0;
    for(int i=0;i<10;i++)
        cin>>a[i];      //苹果的高度
    cin>>n;
    for(int i=0;i<10;i++){
        if(n+30>=a[i])
            answer++;
    }
    cout<<answer<<endl;
    return 0;
}