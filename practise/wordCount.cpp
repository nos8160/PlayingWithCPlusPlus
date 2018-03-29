#include<iostream>
#include<string>
#include<sstream>
using namespace std;

int main(){
	int lineNumber;
	string dummy,real,word;
	cin>>lineNumber;
	getline(cin,dummy);
	for(int i = 0;i< lineNumber; i++){
		getline(cin,real);
		istringstream iss(real);
		int count = 0;
		while(iss>>word){
			count++;		
}
		cout<<count<<endl;

	}
	







}
