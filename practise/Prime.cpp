#include<iostream>
#include<math.h>
using namespace std;
bool isPrime(int num){
    if(num<2) return false;
    if(num ==2) return true;
    if(num%2==0) return false;
    for(int i =3;i<=sqrt(num);i+=2){
        if(num%i==0) return false;
    }
    return true;
}
int main(){
    int lower,higher;
    int sum =0;
    cout<<"enter two numbers: "<<endl;
    cin>>lower>>higher;
    for(int i = lower;i<=higher;i++){
        if(isPrime(i)!=0){
            sum = sum + i;
        }
    }
    cout<<sum<<endl;
}
