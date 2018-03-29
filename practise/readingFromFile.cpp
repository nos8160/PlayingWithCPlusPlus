#include<iostream>
#include<fstream>

using namespace std;
int main(){
	string str;
	ifstream ifile;
	ifile.open("files/let there.txt");
	if(ifile.is_open()){
		while(true){
			getline(ifile,str);
			if(ifile.eof())
				break;
			cout<<str<<endl;
}
		
}
	else{
		cout<<"unable to open the file"<<endl;
}
}
