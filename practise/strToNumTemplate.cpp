//template function example
#include<iostream>
#include<math.h>
#include<sstream>
using namespace std;
/*template <class T>
T toNum(string str){ //this function doesn't compile
    T number;
    stringstream iss(str);
    iss>>number;
    return number;

}*/
template<class T>
bool retSome(T num){
    return num==.5;
}
template <class base,class power>
double getPower(base B,power P){
    double d = pow(B,P);
    return d;
}
int main(){
    string str = "45";
    float x = 15;
    float y = .165;
    cout<<retSome(x)<<endl;
    cout<<retSome(x)<<endl;
    cin>>x>>y;
    cout<<getPower(x,y)<<endl;
}
