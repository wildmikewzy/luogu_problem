//后缀表达式(用栈来做)
#include<iostream>
#include<cstdio>
#include<stack>
#include<vector>
#include<cmath>
using namespace std;
stack<int> st;
vector<int> number;
int turnNumber(){
    int ans=0;
    for(int i=number.size()-1;i>=0;i--){
        ans+=number[i]*pow(10,number.size()-i-1);
    }
    number.clear();
    return ans;
}
int main()
{
    string s;
    cin>>s;
    int i=0;
    while(s[i]!='@'){
        if(s[i]>='0' && s[i]<='9'){
            number.push_back(s[i]-'0');
        }
        else if(s[i]=='.'){
            st.push(turnNumber());
        }
        else{
            int x,y;
            x=st.top();
            st.pop();
            y=st.top();
            st.pop();
            char operation=s[i];
            switch(operation){
                case '+':st.push(x+y);break;
                case '-':st.push(y-x);break;
                case '*':st.push(x*y);break;
                case '/':st.push(y/x);break;
                default:break;
            }
        }
        i++;
    }
    cout<<st.top();
    return 0;
}