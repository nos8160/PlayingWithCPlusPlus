//print the asci value of a string
// input: a good
//output: 97 104 68 
#include<iostream>
using namespace std;
int main(){
	string str;
	int ch;
	getline(cin,str);
	for(int i=0;i<str.size();i++){
		ch = str[i];
		cout<<ch<<" ";
	}
	cout<<endl;
}
