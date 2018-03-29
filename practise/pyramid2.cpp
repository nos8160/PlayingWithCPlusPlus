#include<iostream>
using namespace std;
int main(){
    int arr[][6] ={{1,2,3},{4,5,6},{7,8,9}};
    for(int i =0;i<6;i++){
        for(int j =5;j>=0;j--){
            if(j<=i){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }

}
