#include<iostream>
using namespace std;
int main(){
	char ch;
	int temp;	
	cin>>ch;
	if(ch-48>=0 && ch-48<=9)
	cout<<ch<<" is a number"<<endl;
	else 
	cout<<"not a number"<<endl;	
}
