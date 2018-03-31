#include<iostream>
#include<stdio.h>
#include<math.h>
using namespace std;

int main()
{
    int inputNumber=2; // for 2 successive runs
    unsigned long int number;  // the input
    long int limit; // check wheather the number is divisable upto this limit
    int flag; // a boolean indicator

while(inputNumber--)
	{
	    flag=1;
	    cout << "Please enter an integer: ";
	    cin >> number;

	    limit = sqrt(number); //Farmat's method

	    if(number%2==0)
		{
			flag=0;
		}
	    if(number%2==1)
		{
			for(int i = 3; i <= limit; i=i+2)
			    {
				if(number % i == 0)
				{
				    flag=0;
				    break;
				}
			    }
		}

		if(flag)
		cout << number << " is prime" << endl << endl;
		else cout << number <<" is not prime" << endl << endl;
	}
	return 0;
}
