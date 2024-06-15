//小学数学N合一
#include<iostream>
#include<cmath>
// 填上你觉得需要的其他头文件
using namespace std;
int main() {
    int T;
    cin >> T;
    if (T == 1) {
        cout<<"I love Luogu!"<<endl;
    } else if (T == 2) {
        cout << 2 + 4 << " " << 10 - 2 - 4;
    } else if (T == 3) {
        cout<<14/4<<endl;
        cout<<(14/4)*4<<endl;
        cout<<14%4<<endl;
    } else if (T == 4) {
        double water=500.0,student=3.0;
        printf("%.3lf",water/student);
    } else if (T == 5) {
        cout<<(260+220)/(12+20)<<endl;
    } else if (T == 6) {
        cout<<sqrt(6*6+9*9)<<endl;
    } else if (T == 7) {
        cout<<110<<endl;
        cout<<90<<endl;
        cout<<0<<endl;
    } else if (T == 8) {
        double pai=3.141593;
        cout<<2.0*pai*5.0<<endl;
        cout<<pai*5.0*5.0<<endl;
        cout<<4.0/3.0*pai*5.0*5.0*5.0<<endl;
    } else if (T == 9) {
        cout<<22<<endl;
    } else if (T == 10) {
        cout<<9<<endl;
    } else if (T == 11) {
        cout<<100.0/3.0<<endl;
    } else if (T == 12) {
        cout<<13<<endl;
        cout<<"R"<<endl;
    } else if (T == 13) {
        double pai=3.141593;
        double V=4.0/3.0*pai*(1064.0);
        int answer=int(cbrt(V));
        cout<<answer<<endl;
    } else if (T == 14) {
        cout<<50<<endl;
    }
    return 0;
}