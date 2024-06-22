//工艺品制作
#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int main(){
    int w,x_,h,q,count=0;
    cin>>w>>x_>>h;
    cin>>q;
    int x1[q+1],y1[q+1],z1[q+1],x2[q+1],y2[q+1],z2[q+1];
    bool Cube[21][21][21];
    memset(Cube,false,sizeof(Cube));
    for(int i=0;i<q;i++){
        cin>>x1[i]>>y1[i]>>z1[i]>>x2[i]>>y2[i]>>z2[i];
        //对选择切割的立方体进行访问并标记
        for(int x=x1[i];x<=x2[i];x++){
            for(int y=y1[i];y<=y2[i];y++){
                for(int z=z1[i];z<=z2[i];z++){
                    Cube[x][y][z]=true;
                }
            }
        }
    }
    for(int x=1;x<=w;x++){
        for(int y=1;y<=x_;y++){
            for(int z=1;z<=h;z++){
                if(Cube[x][y][z]==false)
                    count++;
            }
        }
    }
    cout<<count<<endl;
    return 0;
}