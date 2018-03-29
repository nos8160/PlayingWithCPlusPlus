#include<iostream>
#include<fstream>
using namespace std;
int main(){
	ofstream ifile;
	ifile.open("files/create.txt");
	ifile<<"this is my very first\nc++ file!hurray!";
	ifile.close();
	return 0;
}
