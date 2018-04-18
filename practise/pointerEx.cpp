#include<iostream>
using namespace std;
//dynamic allocation of memory/two dimensional array 
int main(){
	int **ptr = new int *[2];
	for(int i =0;i<2;i++){
		ptr[i] = new int[3];
		for(int j =0 ;j< 3;j++){
			cin>>ptr[i][j];
		}
	}
	for(int k =0;k<2;k++){
		for(int l =0;l<3;l++){
			cout<<ptr[k][l]<<" ";

		}
		cout<<endl;
	}
	for(int n =0;n<2;n++){
		delete[] ptr[n];
	}
	delete[] ptr;
}
