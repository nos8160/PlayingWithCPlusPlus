#include<iostream>
using namespace std;
int main(){
	char ascii[256];
	char ch;
	cout<<"ascii value"<<'\t'<<"character"<<endl;
	for(int i =0;i<=255;i++){
		ascii[i] = i;
		cout<<i<<'\t'<<ascii[i]<<endl;
	}
}
