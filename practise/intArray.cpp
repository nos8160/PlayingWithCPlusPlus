#include<iostream>
#include<stdio.h>
using namespace std;
int main(){
	int array[] ={45,21,32};
	int size = sizeof(array)/sizeof(array[0]);
	for(int i = 0; i< size;i++){
		cout<<array+i<<'\t'<<&array[i]<<'\t'<<*(array+i)<<'\t'<<*(&array[i])<<endl;		
	
	}
		
	
}
