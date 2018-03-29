#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	double x = 1.0/3.0;
	cout<<x<<endl;
	double rounded = (int)(x*10000.0)/10000.0;
	cout<<rounded<<endl;
}
