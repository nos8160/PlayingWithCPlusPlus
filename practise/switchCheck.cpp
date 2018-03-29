// guess the output 
#include<iostream>
using namespace std;
int main(){
	char c = 'a';
    switch ( c )
    {
	case 'a':
	case 'b':

	   cout << "hello " << c <<endl;
	   break;
	case 'A': case 'B':
	   cout << " oops";
	   break;
	default:
	   cout << " doh";
    }
}
