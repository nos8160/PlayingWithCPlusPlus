#include<iostream>
using namespace std;
int main(){
	int array[4][5][6];
	int array2[3][7];
	int row = sizeof(array2)/sizeof(array2[0]);
	int colomn = sizeof(array2[0])/sizeof(array2[0][0]);
	cout<<row<<endl<<colomn<<endl;
	int x = sizeof(array)/sizeof(array[0]);
	int y = sizeof(array[0])/sizeof(array[0][0]);
	int z = sizeof(array[0][0])/sizeof(array[0][0][0]);
	cout<<x<<endl<<y<<endl<<z<<endl;
	
}
