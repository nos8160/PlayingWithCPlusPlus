#include<iostream>
#define max(a,b) (a)>(b)?a:b
#define cube(n) (n)*(n)
#define div(a,b) a/b
using namespace std;
int main(){
    int p = 2;
    int x =9;
    int y = 7;
    int z = max(++x,y);
    cout<<z<<endl;
    cout<<cube(p++)<<endl;
    cout<<div(32,2+3)<<endl;
}
