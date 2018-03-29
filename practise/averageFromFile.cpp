#include<iostream>
#include<fstream>
#include<cmath>
using namespace std;
double calculateStDeviation(double mean, int count,double arr[]){
	double sum =0;
	for(int i =0;i<count;i++){
		sum = sum + ((mean-arr[i])*(mean-arr[i]));
	}
	return sqrt((sum/count));
}
int main(){
	double averageOfTens = 0,averageOfFives=0,sumFives = 0,sumTens =0,tens = 0,fives = 0,count=0;
	int i=0,j=0;
	double five[4],ten[4];
	ifstream ifile;
	ifile.open("files/sample.txt");
	if(ifile.is_open()){
		while(true){
			ifile>>tens;
			ifile>>fives;
			if(!ifile.eof()){
				count++;
				five[i++] = fives;
				
				ten[j++] = tens;
				sumFives += fives;
				sumTens += tens;
			}
			else{
				break;
			}
		}
			
	ifile.close();
	averageOfTens = sumTens/count;
	averageOfFives = sumFives/count;
	cout<<averageOfTens<<endl;
	cout<<averageOfFives<<endl;
	cout<<calculateStDeviation(averageOfTens,count,ten)<<endl;
	cout<<calculateStDeviation(averageOfFives,count,five)<<endl;
	}	
	else{
		cout<<"not found";
	}
	
}
