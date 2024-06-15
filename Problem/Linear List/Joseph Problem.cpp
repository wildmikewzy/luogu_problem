//约瑟夫问题(successful)
#include<iostream>
#include<cstdio>
#include<cstring>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int i=1,number=1;//i stands the people,number stands the number which people said;
    vector<int> answer;
    vector<bool> isOut(n+1,false);
    while(!(find(isOut.begin()+1,isOut.end(),false)==isOut.end())){
        if(i>n)
            i=1;
        if(isOut[i]){
            i++;
            continue;
        }
        else if(number==m){
            isOut[i]=true;
            answer.push_back(i);
            number=1;
            i++;
        }
        else{
            i++;
            number++;
        }
    }
    for(auto m:answer)
        cout<<m<<" ";
    return 0;
}