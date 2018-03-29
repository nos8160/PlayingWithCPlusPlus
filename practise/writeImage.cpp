
//write an image to new file 
#include<iostream>
#include<fstream>
using namespace std;
int main(){
	char c;
	ifstream ifile;
	ofstream ofile;
	ifile.open("files/lenna.bmp");
	ofile.open("files/images/lenna4.bmp");

	if(ifile.is_open() && ofile.is_open()){
			while(true){
				c=ifile.get();
				if(!ifile.eof()){
					ofile<<c;
				}
				else break;
			}
	ifile.close();
	ofile.close();
	}
	else{
		cout<<"not found";
	}

}
