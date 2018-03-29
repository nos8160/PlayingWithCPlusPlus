#include<iostream>
#include<stdio.h>
using namespace std;
int main(){
	char ch = 'e';
	int x= 10;	
	cout<<static_cast<void *>(&ch)<<endl;
	cout<<&ch<<endl;
	cout<<&x<<endl;
	printf("%p\n",&ch);
}
