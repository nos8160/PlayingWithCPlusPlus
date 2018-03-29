#include<iostream>
using namespace std;
void singlePrintArray(int array[],int n){
	for(int i=0;i<n;i++){
		cout<<*(array+i)<<endl;
		//cout<<*array+4<<endl;
		//cout<<array[i]<<endl;
		//cout<<&array[i]<<endl;
		
	} 
}	
void printArray(int array[][2],int m,int n){
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			//cout<<array[i][j]<<'\t';
			//cout<<&array[i][j]<<'\t';
			//cout<<array+i+j<<'\t';
			cout<<*(array+i)<<'\t';
		}
		cout<<endl;
	}
	
}
int main(){
	int hell[2] = {9,7};
	int nums[] ={2,3};
	int array2[3][2]= {{1,2},{2,3},{5,9}};
	int row = sizeof(array2)/sizeof(array2[0]);
	int colomn = sizeof(array2[0])/sizeof(array2[0][0]);
	//printArray(array2,row,colomn);
	//singlePrintArray(nums,2);
	cout<<*hell<<" "<<&hell<<" "<<hell<<endl;
	cout<<*nums<<" "<<&nums<<" "<<nums<<endl;
	cout<<*array2<<" "<<*(*(array2+0)+0)<<endl;
}
