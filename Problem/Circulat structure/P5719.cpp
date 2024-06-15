//分类平均
#include<iostream>
#include<cstdio>
#include<vector>
using namespace std;
double Average(vector<int> X){
    double sum=0.0;
    for(auto &i:X){
        sum+=double(i);
    }
    return sum/X.size();
}
int main(){
    int n,k;
    cin>>n>>k;
    vector<int> A,B;
    for(int i=1;i<=n;i++){
        if(i%k==0)
            A.push_back(i);
        else    
            B.push_back(i);
    }
    printf("%.1lf %.1lf",Average(A),Average(B));
    return 0;
}