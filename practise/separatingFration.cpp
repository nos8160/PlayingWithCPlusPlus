//separate the integer part and float part from a double number
//in: 45.32
//out: 45     32
#include<iostream>
using namespace std;
int main(){
	double amount;
	cin>>amount;
	int integerPart = amount;
	double fractionPart = (int)(amount - integerPart);
	cout<<integerPart<<endl<<fractionPart<<endl;

}
