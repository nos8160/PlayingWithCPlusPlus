#include<iostream>
using namespace std;
int main(){
    int arr[][6] ={{1,2,3},{4,5,6},{7,8,9}};
    for(int i =0;i<6;i++){
        for(int j =0;j<6;j++){
                        if(i==0 || j==0||i==5||j==5){
                            cout<<"*";
                        }
                        else cout<<" ";
        }
        cout<<endl;
    }

}
