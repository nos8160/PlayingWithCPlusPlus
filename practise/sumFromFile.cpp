//count the summation of numbers from a file 
#include<iostream>
#include<fstream>
using namespace std;
int main(){
	int sum = 0,x;
	ifstream infile;
	infile.open("files/number.txt");
	if(!infile){

		cout<<"unable to open the file.";
}
	while(infile>>x){

		sum = sum + x;
}

	infile.close();
	cout<<sum<<endl;
	return 0;
}
