//验证栈序列
#include<iostream>
#include<cstdio>
#include<stack>
const int maxn=1e5+1;
using namespace std;
stack<int> s;
int main()
{
    //freopen("C:\\Users\\ssyz__yw3k9a\\Desktop\\data.in","r",stdin);
    int q;
    cin>>q;
    while(q--){
        int n;
        cin>>n;
        int pushed[n+1],poped[n+1];
        //input the data
        for(int i=0;i<n;i++)
            cin>>pushed[i];
        for(int i=0;i<n;i++)
            cin>>poped[i];
        int flag_pop=0;
        for(int i=0;i<n;i++){
            s.push(pushed[i]);     //入栈
            while((s.top()) == poped[flag_pop]){
                s.pop(),flag_pop++;
                if(s.empty())
                    break;
            }
        }
        if(s.empty())
            cout<<"Yes"<<endl;
        else{
            cout<<"No"<<endl;
            while(!s.empty())
                s.pop();
        }
    }
    return 0;
}