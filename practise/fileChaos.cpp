#include<iostream>
#include<fstream>
using namespace std;
int main(){
	int count = 0;
	ifstream ifile;
	string str="asdf";
	ifile.open("/home/nazrul/Works/C++/files/let there be3.txt");
	if(ifile.is_open()){
		while(true){
			getline(ifile,str);
			if(!ifile.eof()){
				count++;
				cout<<str<<endl;
			}
			else break;
		}
		cout<<count<<endl;		
	}
	else{
		cout<<"not found";	
	}
}
