#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main(){
	string str;
	ifstream ifile;
	ifile.open("files/empty.txt");
	cout<<ifile.eof();
	if(ifile.is_open()){
		while(true){
			if(!ifile.eof())
				getline(ifile,str);
			else break;
				cout<<str+"asd"<<endl;				
}
		}
	else{
		cout<<"sorry!the file wasn't found.please,check the path again";
		}
return 0;
}
