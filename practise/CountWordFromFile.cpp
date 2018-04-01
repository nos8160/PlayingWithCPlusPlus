#include<iostream>
#include<fstream>
#include<sstream>
using namespace std;
int countWord(string str){
    istringstream is(str);
    string word;
    int count = 0;
    while(is>>word){
        count++;
    }
    return count;
}
int main(){
    ifstream ifile;
    string str;
    int count = 0,wordCount = 0;
    ifile.open("files/let there be3.txt");
    if(ifile.is_open()){
        while(true){
            getline(ifile,str);
            if(!ifile.eof()){
                count++;
                wordCount += countWord(str);
            }
            else break;
        }
        cout<<"no of line is:  "<<count<<endl;
        cout<< "no of word is:"<<wordCount<<endl;
    }
    else{
        cout<<"not found"<<endl;
    }
}
