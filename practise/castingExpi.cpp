#include<iostream>
using namespace std;
int main(){
	int a = 5; // NOTE: non-const object
        const int* pA = &a;
   
        int* pX = const_cast<int*>(pA); // cast away constness
*pX = 10; // fine and a is now 10
cout<<a<<endl;
}
