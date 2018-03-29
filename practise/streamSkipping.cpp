//problems with using "cin" operator followed by getline method
#include<iostream>
using namespace std;
int main(){
	int x;
	string str,dummy;
	cin>>x;
	getline(cin,dummy);
	getline(cin,str);
	cout<<str<<endl<<dummy<<endl<<x<<endl;
}
