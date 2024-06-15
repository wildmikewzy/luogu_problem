//营销额统计
#include<iostream>
#include<cstdio>
#include<set>
#include<cmath>
using namespace std;
set<int> memory;
set<int>::iterator it;
set<int>::iterator it_2;
int main()
{
    //freopen("C:\\Users\\ssyz__yw3k9a\\Desktop\\data.in","r",stdin);
    memory.insert(190000000);
    memory.insert(-190000000);
    int n;
    cin>>n;
    int x,ans=0;
    for(int i=1;i<=n;i++){
        cin>>x;
        if(memory.size()==2){
            memory.insert(x);
            ans+=x;
        }
        else{
            it=memory.lower_bound(x);   //求出memory中大于等于x的最小数字
            it_2=it--;
            if(*it_2!=x){
                ans+=min(abs(*it-x),abs(*it_2-x));
                memory.insert(x);
            }
        }
    }
    cout<<ans<<endl;
    return 0;
}