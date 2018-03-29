#include<iostream>
using namespace std;
int *returnArray(){
	int array[] = {5,9};
	return array;	
}
int main(){
	int array = returnArray();
	cout<<array[0]<<endl;
}
