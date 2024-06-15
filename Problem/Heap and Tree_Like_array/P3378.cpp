//堆
#include<iostream>
#include<cstdio>
#include<queue>
#include<vector>
std::priority_queue<int,std::vector<int>,std::greater<int>> q;
using namespace std;
int main(){
    int n;
    scanf("%d",&n);
    while(n--){
        int op;
        scanf("%d",&op);
        if(op==1){
            int x;
            scanf("%d",&x);
            q.push(x);
        }
        else if(op==2){
            printf("%d\n",q.top());
        }
        else{
            q.pop();
        }
    }
    return 0;
}