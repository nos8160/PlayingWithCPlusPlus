#include<iostream>
using namespace std;
void printArray(int array[],int n){
	for(int i=0;i<n;i++){
		cout<<*(array+i)<<endl;
		cout<<*array+4<<endl;
		cout<<array[i]<<endl;
		cout<<&array[i]<<endl;
		
	}
	
}
int main(){
	
	int nums[] = {2,3,6};
	int size = sizeof(nums)/sizeof(nums[0]);
	cout<<&nums<<endl;
	printArray(nums,size);
	
}
