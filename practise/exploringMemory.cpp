#include<iostream>
using namespace std;
int doSummation(int *array){
	int sum =0;
	int length =sizeof(array);
	cout<<length<<endl;
	for(int i = 0;i<length;i++){
		sum +=array[i];
	}
	return sum;

}
int main(){
	int num=3;
	int arr[] = {6};
	cout<<doSummation(arr)<<endl;	
}
