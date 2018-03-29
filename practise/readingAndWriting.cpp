#include<iostream>
#include<fstream>
using namespace std;
int main(){
	string str;
	ifstream ifile;
	ofstream ofile;
	ifile.open("files/let there.txt");
	ofile.open("files/let there be3.txt");
	if(ifile.is_open()){
		while(true){
			getline(ifile,str);
			if(!ifile.eof()){
				ofile<<str<<endl;			
			}
			else{
				break;		
			}		
		}
	}
	else{
		cout<<"file not found.";
	}
	ifile.close();
	ofile.close();
}
