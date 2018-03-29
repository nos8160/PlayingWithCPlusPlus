#include<iostream>
#include<stdio.h>
#include<sstream>
#include<string>
using namespace std;
int y = 6;
void square(int &x){
	x= x *x;
}

int main(){
	string str = "45 6";
	stringstream ss(str);
	int number;
	ss>>number;
	cout<<number<<endl;
	cout<<atoi(str);

}	
