#include<iostream>
using namespace std;
template<typename T>
T mymax(T x , T y){
    if(x>y) return x;
    else return y;
}
template<>
char mymax(char a, char b){
    if(a>b) return a;
    else return b;
}
int main(){
 int x = 45, y = 65;
 double s = 21 , t = 68;
 char a = 'a', b = 'c';
 cout<< mymax(s,t)<<endl;
 cout<<mymax(x,y)<<endl;
 cout<<mymax(a,b)<<endl;
}
