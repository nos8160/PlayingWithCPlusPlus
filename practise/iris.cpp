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
/*void printArray(double arr1[],double arr2[]){
	
	for(int i =0;i<4;i++){
		cout<<*(arr2+i)<<endl;
		
	}
}*/
double calDis(double arrayIn[],double arrayTmp[]){
	double res = 0;
	for(int i =0;i<4;i++){
		res = res + (arrayIn[i]-arrayTmp[i])*(arrayIn[i]-arrayTmp[i]);
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
		//cout<<distance<<endl;
		if(distance<=2 && (str[x].compare("setosa")==0)) set++;
		if(distance<=2 && (str[x].compare("virginica")==0)) virgin++;
		if(distance<=2 && (str[x].compare("versicolor")==0)) versi++;
	}
	double total = set + virgin + versi;
	cout<<"number of setos: "<<set<<endl<<"number of virginica: "<<virgin<<endl<<"number of versicolor: "<<versi<<endl;
	cout<<"probability of being setosa: "<<set/total<<endl;
	cout<<"probability of being virginica: "<<virgin/total<<endl;
	cout<<"probability of being versicolor: "<<versi/total<<endl;
	
}
