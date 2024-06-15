//海港(模拟)(用队列进行优化)(successful)
#include<iostream>
#include<cstdio>
#include<vector>
#include<set>
#include<queue>
#include<cstring>
#include<fstream>
using namespace std;
int mark=0;
const int maxn=1e5;
class Imformation{
public:
    int time,k;     //k stands for the number of people in the ship.
    vector<int> people;
} ship[maxn];
int statistic[maxn+1];
queue<Imformation> memory;
int main()
{
	//freopen("C:\\Users\\ssyz__yw3k9a\\Desktop\\P2058_2.in","r",stdin);
	memset(statistic,0,sizeof(statistic));
    int n;      //n艘船的信息
    cin>>n;
    Imformation imformation[n];
    int ans=0;
    for(int i=0;i<n;i++){
		//input the data
        cin>>ship[i].time>>ship[i].k;//time and the number of passenger
        ship[i].people.resize(ship[i].k);
        for(int j=0;j<ship[i].k;j++)
            cin>>ship[i].people[j];
		//队列调整,加入当前船只，扣除超过1天的船只
		memory.push(ship[i]);
		for(auto &m:ship[i].people){
			if(statistic[m]==0)
				ans++;
			statistic[m]++;
		}
		while(!memory.empty()){
			if(memory.back().time - memory.front().time>=86400){	//超过1天
				for(auto m:memory.front().people){
					statistic[m]--;
					if(statistic[m]==0)
						--ans;
				}
				memory.pop();
			}
			else
				break;
		}
		cout<<ans<<endl;
    }
    return 0;
}