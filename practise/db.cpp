#include<iostream>
#include<sstream>
#include<math.h>
#include<fstream>
#define row 150
#define col 4
using namespace std;
double dataset[row][col];
void printData(){
    for(int i = 0;i< row;i++){
        for(int j = 0;j<col;j++){
            cout<<dataset[i][j]<<"     ";
        }
        cout<<endl;
    }
}
double toNumber(string str){
    double d;
    stringstream st(str);
    st>>d;
    return d;
}
void readData(){
    string tempString,str;
    int i=0;
    ifstream ifile;
    ifile.open("files/iris.txt");
    if(ifile.is_open()){
        while(i<row){
            if(!ifile.eof()){
                for(int j=0;j<col;j++){
                    getline(ifile,tempString,',');
                    //cout<<tempString<<"  ";
                    dataset[i][j] = toNumber(tempString);
                    //cout<<dataset[i][j]<<"   ";
                }
                getline(ifile,tempString);
                str = tempString;
                cout<<endl;
            }
            else break;
        }
        ifile.close();
    }
    else{
        cout<<"not found"<<endl;
    }
}
int main(){
    readData();
    printData();
}
