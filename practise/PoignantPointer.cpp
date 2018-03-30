#include<iostream>
using namespace std;
int doDualSummation(int arr[][4],int row,int col){
    int sum = 0;
    for(int i = 0;i<row;i++){
        for(int j = 0;j<col;j++){
            sum += *(*(arr+i)+j);
        }
    }
    return sum;
}
int doSummation(int *arr,int size){
    int sum = 0;
    for(int i = 0;i< size;i++){
        sum += *(arr+i);
    }
    return sum;
}
int main(){
    /*int array[3] ={5,7,9};
    int num = 20;
    int * x = &num;
    int* y = array;
    int *z = &array;
    cout<<*x<<endl;
    cout<<*(y+1)<<endl;
    cout<<*(z+1)<<endl;
    */
    /*int array[3][4] = {{1,2,3,4},{5,6,7,8},{1,1,2,3}};
    int array_row = sizeof(array)/sizeof(array[0]);
    int array_col = sizeof(array[0])/sizeof(array[0][0]);
    for(int i = 0;i<array_row;i++){
        for(int j = 0;j<array_col;j++){
            //cout<<"  " << array[i][j];
            cout<<" "<< *(*(ptr+i)+j);
        }
        cout<<endl;
    }*/
    /*
    int array[]= {9,7,16};
    int size = sizeof(array)/sizeof(array[0]);
    int *ptr = array;
    cout<<doSummation(&array[0],size)<<endl;
*/
    int array[3][4] = {{1,2,3,4},{5,6,7,8},{1,1,2,3}};
    int row_size = sizeof(array)/sizeof(array[0]);
    int col_size = sizeof(array[0])/sizeof(array[0][0]);
    cout<<doDualSummation(array,row_size,col_size)<<endl;
}
