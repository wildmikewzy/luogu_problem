//机器翻译
#include<iostream>
#include<cstdio>
#include<queue>
#include<algorithm>
using namespace std;
bool queueFind(queue<int> q,int n){
    while(!q.empty()){
        if(q.front()==n)
            return true;
        q.pop();
    }
    return false;
}
int main()
{
    int m,n,ans=0;
    cin>>m>>n;
    std::queue<int> dictionary;
    for(int i=1;i<=n;i++){
        int word;
        cin>>word;
        if(!queueFind(dictionary,word)){
            ans++;
            if(dictionary.size()<m)
                dictionary.push(word);
            else{
                dictionary.pop();
                dictionary.push(word);
            }
        }
    }
    cout<<ans<<endl;
    return 0;
}