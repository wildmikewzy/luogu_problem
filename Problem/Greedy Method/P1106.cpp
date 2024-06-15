//删数问题
#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int main(){
    //freopen("C:\\Users\\ssyz__yw3k9a\\Desktop\\P1106_1.in","r",stdin);
    string n;int s;
    cin>>n;
    cin>>s;
    int len=n.length();
    for(int i=1;i<=s;i++){      //一共要删除k个字符
        for(int j=0;j<len-1;j++){
            if(n[j]>n[j+1]){    //出现单调递减
                for(int p=j;p<len-1;p++)
                    n[p]=n[p+1];    //删除n[j]; 
                break;
            }    
        }
        len--;
    }
    int flag=0,m=len;
    while(n[flag]=='0' && m>1){
        flag++;
        m--;
    }
    for(int i=flag;i<len;i++)
        cout<<n[i];
    return 0;
}