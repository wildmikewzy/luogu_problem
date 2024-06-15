//计数问题
#include<iostream>
#include<cstdio>
#include<vector>
using namespace std;
vector<int> memory;
int calculate(int i,int x){
    int answer=0;
    memory.clear();
    while(i>=1){
        memory.push_back(i%10);
        i/=10;
    }
    for(auto m:memory){
        if(m==x)
            answer++;
    }
    return answer;
}
int main(){
    int n,x;
    cin>>n>>x;
    int mark=0;
    for(int i=1;i<=n;i++){
        mark+=calculate(i,x);
    }
    cout<<mark<<endl;
    return 0;
}