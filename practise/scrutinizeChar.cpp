#include<iostream>
#include<sstream>
using namespace std;
int main(){
	string str = "this is bangladesh";
	istringstream iss(str);
	while(!iss.eof()){
		cout<<iss.get()<<endl;	
	}
}
