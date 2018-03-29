#include<iostream>
#include<fstream>
#include<sstream>

using namespace std;
double convertString(string str){
	
	double d;
	stringstream ss;
	ss<<str;
	ss>>d;
	ss.clear();
	return d;
}
void categorizeValues(double data[], string st){
	switch(st){
		case "setosa":
		
	}
}
int main(){
	double sepalLength,sepalWidth,petalLength,petalWidth;
	double sepalLen[][], array[4];
	string origin;
	ifstream ifile;
	stringstream ss;
	ifile.open("files/iris.txt");
	if(ifile.is_open()){
		while(true){
			getline(ifile,origin,',');
			
			if(!ifile.eof()){
				
			
			array[0]= convertString(origin);
			getline(ifile,origin,',');
			
			array[1]= convertString(origin);
			getline(ifile,origin,',');
			
			array[2]= convertString(origin);
			getline(ifile,origin,',');
		
			array[3]= convertString(origin);
			getline(ifile,origin);
			cout<<origin<<endl;
			
			}
			else break;
		}
	}
	else{
		cout<<"not found";
	}
}
