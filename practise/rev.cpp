#include<iostream>
#include<math.h>
#define count sizeof(int)*8
using namespace std;
int reverseNumber(int number){
    int min = pow(2, 32 - 1) *-1;
    int max = pow(2, 32- 1) - 1;
    long int reversedNumber = 0;
    for(;number!=0;number/=10){
        reversedNumber = reversedNumber*10 + number%10;

    }
    if(reversedNumber>max || reversedNumber<min) return 0;
    return (int)reversedNumber;
}
int main(){
        int x = 1534;
        cout<<reverseNumber(x)<<endl;

}
