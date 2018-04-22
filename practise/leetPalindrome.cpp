#include<iostream>
using namespace std;
bool isPalindrome(int number){
    int temp =number;
    int reversedNumber = 0;
    for(;number!=0;number/=10){
    reversedNumber = reversedNumber*10 + number%10;

}
    if(reversedNumber<0) return false;
    if(reversedNumber==temp) return true;
    return false;
}
int main(){
    int x = -121;
    cout<<isPalindrome(x)<<endl;
}
