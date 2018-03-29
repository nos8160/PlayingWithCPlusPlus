#include<iostream>
#include<cmath>
using namespace std;
template<class T>
void swapping(T &x,T &y) {
    x= (x^y);
    y= x^y;
    x=x^y;
    cout<<x<<" "<<y<<endl;

}
string decToBin(int num){
    int i =0;
    string res = "";
    while(num>0){
        if(num%2==1){
            res +="1";
        }
        else{
            res +="0";
        }
        num = num/2;
        i++;
    }
    return res;
}
int main(){
    //string samsung ="4.4564",apple = "27.6";
    int samsung =56,apple = 78;
    cout<<~5<<endl;
    cout<<decToBin(1000)<<endl;
    swapping(samsung,apple);
    cout<<samsung<<" "<<apple<<endl;
}
