#include<iostream>
#include<sstream>
#include<fstream>
#include<string>
#include<math.h>
using namespace std;
double toNumber(string str){
	double d;
	stringstream ss(str);
	ss>>d;
	return d;
}
/*void printArray(string arr[],int size){
	int setosa = 0,verginica = 0,versicolor =0;
	for(int i =0;i<size;i++){
		if((arr[i].compare("setosa"))==0) setosa++;
		if((arr[i].compare("versicolor"))==0) versicolor++;
		if((arr[i].compare("virginica"))==0) verginica++;
		cout<<*(arr+i)<<endl;
		
	}
	cout<<setosa<<"  "<<verginica<<"  "<<versicolor<<endl;
}*/
double calDis(double arrayIn[],double arrayTmp[]){
	double res = 0;
	for(int i =0;i<4;i++){
		res = res + pow((arrayIn[i]-arrayTmp[i]),2);
	} 
	return sqrt(res);
}
int main(){
	double inputArray[4];
	double tempArray[4];
	double distance;
	int i = 0 ,j = 0,k = 0,set =0,virgin =0,versi =0;
	fstream ifile;
	string tempString;
	double rows[150][4];
	string str[150];
	
	int strArraySize = sizeof(str)/sizeof(str[0]);
	int row = sizeof(rows)/sizeof(rows[0]);
	int colomn = sizeof(rows[0])/sizeof(rows[0][0]);
	ifile.open("files/iris.txt");
	if(ifile.is_open()){
		
		while(i<150){
		
			if(!ifile.eof()){
				
				for(j=0;j<4;j++){
					getline(ifile,tempString,',');
					rows[i][j] = toNumber(tempString);
				}
				getline(ifile,tempString);
				str[k++] = tempString;
				i++;
			}
			else break;
		}
		
	}
	else{
		cout<<"not found";
	}
	//printArray(str,strArraySize);
	for(int m = 0;m<4;m++){
		cin>>inputArray[m];
	}
	for(int x = 0;x<row;x++){
		for(int y = 0;y<colomn;y++){
			tempArray[y] = rows[x][y];			
		}
		distance = calDis(inputArray,tempArray);
		cout<<distance<<endl;
		if(distance<=.50 && (str[x].compare("setosa"))) set++;
		if(distance<=.50 && (str[x].compare("virginica"))) virgin++;
		if(distance<=.50 && (str[x].compare("versicolor"))) versi++;
	}
	cout<<set<<" "<<virgin<<" "<<versi<<endl;
}
