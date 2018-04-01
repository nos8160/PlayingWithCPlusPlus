#include<iostream>
using namespace std;
void printArray(int **arr){
    for(int i =0;i<3;i++){
        for(int j = 0;j<4;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main(){
    int** array = new int*[3];
    for(int i = 0 ;i< 3;i++){
        array[i] = new int[4];
        for(int j =0;j<4;j++){
            cin>>array[i][j];
        }
    }
    printArray(array);
    for(int i =0;i<3;i++){
        delete[] array[i];
    }
    delete[] array;
}
