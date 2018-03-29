#include<iostream>
#include<cmath>
using namespace std;

int signedMaximumRange(int num){
	return pow(2,num)-1;
	
}

int main(){
	short int num;
	cin>>num;
	cout<< signedMaximumRange(num)<<endl;
	

}
