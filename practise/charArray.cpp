#include<iostream>
#include<stdio.h>
using namespace std;
int main(){
	char array[] ={'a','b','c'};
	int size = sizeof(array)/sizeof(array[0]);
	for(int i = 0; i< size;i++){
		cout<<static_cast<void *>(array+i)<<'\t'<<static_cast<void *>(&array[i])<<'\t'<<*(array+i)<<'\t'<<*(&array[i])<<endl;		
	
	}
		
	
}
