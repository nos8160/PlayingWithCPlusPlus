#include<iostream>
using namespace std;
int main(){
    int arr[][6] ={{1,2,3},{4,5,6},{7,8,9}};
    for(int i =5;i>0;i--){
        for(int j =0;j<9;j++){
            if((j<=4 - i)||(j>=4 + i)){
                cout<<" ";
            }
            else{
                cout<<"*";
            }
        }
        cout<<endl;
    }

}
