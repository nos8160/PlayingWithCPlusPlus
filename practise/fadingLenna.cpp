#include<iostream>
#include<fstream>
using namespace std;
int main(){
	unsigned char red,green,blue,averageByte;
	ifstream ifile;
	ofstream ofile;
	ifile.open("files/lenna.bmp");	
	ofile.open("files/lennaGoesBlack4.bmp");
	if(ifile.is_open()&&ofile.is_open()){
		 char header;
/*reads 54 bytes header segment of .bmp file*/
		for(int i = 0;i<54;i++){ 
			header = ifile.get();
			ofile<<header;
		}
		while(!ifile.eof()){
			red = ifile.get();
			green = ifile.get();
			blue = ifile.get();
			//ofile<<red<<green<<blue; /*only to write file as it was*/
			averageByte = (red + green + blue)/3; 
/*replaces pixels with average value of rgb color trio to get black and white image */
			for(int j = 0;j<3;j++){
				ofile<<averageByte;
			}
		}
		ifile.close();
		ofile.close();
	}
	else{
		cout<<"file not found";
	}
return 0;
	
}
