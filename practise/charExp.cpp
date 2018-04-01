#include<iostream>
#include<string.h>
#include<sstream>
using namespace std;
int countWord(string str){
    string word;
    int count = 0;
    istringstream is(str);
    while(is>>word){
        if(word.length()>1)
        count++;
    }
    return count;
}
void swap(char *x, char *y){
    char temp = *x;
    *x = *y;
    *y = temp;
}
string revString(string str){
    for(int i = 0;i<(str.length())/2;i++){
        swap(str[i],str[str.length()-i-1]);
    }
    return str;
}
int main(){
    string str;
    getline(cin,str);
/*    revString(str);
    cout<<revString(str)<<endl;
    if(str.compare(revString(str))==0){
        cout<<"palindrome"<<endl;
    }
*/
    cout<<countWord(str)<<endl;
}
