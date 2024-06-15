//回文质数
#include<iostream>
#include<cstdio>
#include<cstring>

using namespace std;
const int maxn=1e8+1;
bool prime[maxn];
void Sieve(int b){       //successful
    memset(prime,true,sizeof(prime));
    prime[1]=false;
    for(int i=2;i*i<=b+1;i++){
        if(prime[i]){
            for(int j=2;j<=(b+1)/i;j++){
                prime[i*j]=false;
            }
        }
    }
}
bool isHws(int num){       //判断是否为回文数 successful
    int temp=num,ans=0;
    while(temp!=0){
        ans=ans*10+temp%10;
        temp/=10;
    }
    if(ans==num)
        return true;
    return false;
}
int main(){
    
    int a,b;
    scanf("%d %d",&a,&b);
    if (b>=10000000)    b=9999999;
    Sieve(b);
    if(a%2==0)
        a++;
    for(int i=a;i<=b;i+=2){
        if(prime[i]&&isHws(i))
            cout<<i<<endl;
    }
    return 0;
}