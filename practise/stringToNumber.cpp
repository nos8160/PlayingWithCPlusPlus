//convert string into number type 
#include<iostream>
using namespace std;
template <typename T>
T toNumber( string str ) {
	T = 0;
	for(int i = 0 ;i< str.size();i++){
		T = T*10+ str[i]-48;
		return T;
	}
	 }
int main(){
	string str = "456";
	cout<<toNumber(str)<<endl;
}
