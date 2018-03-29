#include<iostream>
#include<sstream>
using namespace std;
int doSummation(int array[]){
	int sum = 0,i=0;
	while(i<2){
		sum = sum + array[i];
		i++;
	}
	return sum;
}
int main(){
	char chArray[] = {'a','4'};
	int array[] ={5,9};
	cout<<doSummation(array)<<endl;
	
}
