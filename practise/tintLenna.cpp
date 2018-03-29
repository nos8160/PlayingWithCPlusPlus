#include<iostream>
#include<fstream>
using namespace std;
int main(){
	unsigned char ch1,ch2,ch3,avg;
	ifstream file1;
	ofstream file2;
	file1.open("files/lenna.bmp",ios::binary);	
	file2.open("files/blackwhite.bmp",ios::binary);
	if(file1.is_open()&&file2.is_open()){
		 char x;

		for(int i = 0;i<54;i++){ 
			x = file1.get();
			file2<<x;
		}
		while(!file1.eof()){
			ch1 = file1.get();
			ch2 = file1.get();
			ch3 = file1.get();
			avg = (ch1 + ch2 + ch3)/3; 

			file2<<avg<<avg<<avg;
		}
		file1.close();
		file2.close();
	}
	else{
		cout<<"sorry!no file found";
	}

	
}
