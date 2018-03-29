#include<iostream>
#include<stdio.h>
using namespace std;
void square(int &x){
	x= x *x;
}

int main(){
	int val=5;
	square(val);
	cout<<val<<endl;	
	
}
