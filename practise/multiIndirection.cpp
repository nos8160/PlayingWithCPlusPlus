//guess the output
#include<iostream>
using namespace std;
int main(){
	int c = 42;
	int *p = &c;
	int **q = &p;
	cout<<p<<endl;
	cout<<&c<<endl;
	cout<<&p<<endl;
	cout<<*q<<endl;
	cout<<**&*q<<endl;

}
