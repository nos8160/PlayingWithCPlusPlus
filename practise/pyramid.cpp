//all program name starting with "pyramid" are for guessing the output 
#include<iostream>
using namespace std;
int main(){
    int arr[][6] ={{1,2,3},{4,5,6},{7,8,9}};
    for(int i =0;i<6;i++){
        for(int j =5;j>i;j--){
            cout<<"*";
        }
        cout<<endl;
    }

}
