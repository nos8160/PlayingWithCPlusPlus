#include<iostream>
using namespace std;
int main(){
	int num = 56;
	int *p = &num;
	int *p2 = &*p;
	cout<<p2<<endl;
	cout<<&p2<<endl;
	cout<<&*p2<<endl;
	cout<<&p<<endl;
	cout<<&num<<endl;

}
