#include<iostream>
using namespace std;
int gcd(int number1,int number2){
    if(number1 ==0 || number2==0){
        return 0;
    }
    if(number1 == number2)
        return number1;
    if(number1>number2)
        return gcd((number1-number2),number2);
    return gcd(number1,(number2-number1));
}
int main(){
    int number1,number2;
    cin>>number1;
    cin>>number2;
    cout<<gcd(number1,number2)<<endl;

}
