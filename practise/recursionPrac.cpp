#include<iostream>
using namespace std;
void rect(int x){
	if(x>0){
		rect(--x);
		cout<<x<<endl;
		//rect(--x);
		
	}
}
int main(){
	int i = 2;
	rect(i);
	
}
