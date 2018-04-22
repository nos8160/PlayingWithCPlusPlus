#include<math.h>
#include "TemplateCollection.cpp"
using namespace std;

int dificientNumber(int number){
    #include<iostream>
    int sum =0;
    for(int i = 2;i<=sqrt(number);i++){
        if(number%i == 0){
            if((number/i)==i){
                sum+=i;
            }
            else{
                sum+=i;
                sum+=(number/i);
            }
        }
    }
    return sum;
}
string numberDecider(int number){
    if(number == dificientNumber(number))
        return "perfect number";
    if(number > dificientNumber(number))
        return "dificient Number";
    if(number<dificientNumber(number))
        return "abundant Number";
}
int reverseNumber(int number){
    int reversedNumber = 0;
    for(;number>0;number/=10){
        reversedNumber = reversedNumber*10 + number%10;
    }
    return reversedNumber;
}
bool isPalindrome(int number){
    return number == reverseNumber(number);
}


int main(){
    int number;
    cin>>number;
    cout<<reverseNumber<<endl;

}
