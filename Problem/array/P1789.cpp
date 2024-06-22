//【Mc生存】插火把
#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
bool map[101][101];
int x[26][2];  //表示火把的位置
int o[6][2];    //表示萤石的位置
int main(){
    int count=0;
    memset(map,false,sizeof(map));
    int n,m,k;    //m个火把，K个萤石
    cin>>n>>m>>k;
    //插火把(success)
    for(int i=1;i<=m;i++){
        cin>>x[i][0]>>x[i][1];
        map[x[i][0]][x[i][1]]=true;
        for(int k=1;k<=2;k++){
            if(x[i][0]+k<=n){
                map[x[i][0]+k][x[i][1]]=true;
            }
            if(x[i][0]-k>=1){
                map[x[i][0]-k][x[i][1]]=true;
            }
             if(x[i][1]+k<=n){
                map[x[i][0]][x[i][1]+k]=true;
            }
            if(x[i][1]-k>=1){
                map[x[i][0]][x[i][1]-k]=true;
            }
        }
        if(x[i][0]+1<=n &&x[i][1]+1<=n)
            map[x[i][0]+1][x[i][1]+1]=true;
        if(x[i][0]+1<=n &&x[i][1]-1>=1)
            map[x[i][0]+1][x[i][1]-1]=true;
        if(x[i][0]-1>=1 &&x[i][1]+1<=n)
            map[x[i][0]-1][x[i][1]+1]=true;
        if(x[i][0]-1>=1 &&x[i][1]-1>=1)
            map[x[i][0]-1][x[i][1]-1]=true;
    }
    //插萤石(wrong)
    for(int j=1;j<=k;j++){
        cin>>o[j][0]>>o[j][1];
        
        for(int m=0;m<=2;m++){
            for(int k=0;k<=2;k++){
                if(o[j][0]+m<=n && o[j][1]+k<=n)      //向右下
                    map[o[j][0]+m][o[j][1]+k]=true;
                if(o[j][0]+m<=n && o[j][1]-k>=1)      //向左下
                    map[o[j][0]+m][o[j][1]-k]=true; 
                if(o[j][0]-m>=1 && o[j][1]+k<=n)      //向右上
                    map[o[j][0]-m][o[j][1]+k]=true;
                if(o[j][0]-m>=1 && o[j][1]-k>=1)      //向左上
                    map[o[j][0]-m][o[j][1]-k]=true;
                
            }
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(!map[i][j])
                count++;
        }
    }
    cout<<count<<endl;
    return 0;
}