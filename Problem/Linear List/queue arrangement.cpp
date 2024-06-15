//队列安排
#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
const int maxn=1e5+5;
int left_[maxn],right_[maxn];
void Delete(int deletePoint){
    if(right_[deletePoint]==-1 && left_[deletePoint]==-1)
        return;
    right_[left_[deletePoint]]=right_[deletePoint];
    left_[right_[deletePoint]]=left_[deletePoint];
    right_[deletePoint]=-1;
    left_[deletePoint]=-1;
}
int main(){
    
    memset(left_,0,sizeof(left_));
    memset(right_,0,sizeof(right_));
    int n;
    cin>>n;
    //入队操作
    for(int i=2;i<=n;i++){
        int k,p;
        cin>>k>>p;
        if(p==1){      //push i in k's right
            if(right_[k]!=0){
                left_[right_[k]]=i;
                right_[i]=right_[k];
            }
            right_[k]=i;
            left_[i]=k;
        }
        else{       //push i in k's left;
            if(left_[k]!=0){
                right_[left_[k]]=i;
                left_[i]=left_[k];
            }
            right_[i]=k;
            left_[k]=i;
        }
    }
    //出队操作(M)
    int m;cin>>m;
    while(m--){
        int deletePoint;
        cin>>deletePoint;
        Delete(deletePoint);
    }
    int front,back;
    for(int i=1;i<=n;i++){
        if(left_[i]==0)
            front=i;
        if(right_[i]==0)
            back=i;
    }
    while(front!=back){
        cout<<front<<" ";
        front=right_[front];
    }
    cout<<back;
    return 0;
}