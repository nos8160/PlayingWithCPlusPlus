#include<iostream>
using namespace std;
void printArray(int (*arr)[4],int x,int y){
    for(int i =0;i< x;i++){
        for(int j =0;j<y;j++){
            cout<< *(*(arr+i)+j)<<"  ";
        }
        cout<<endl;
    }
}
int makeSummation(int (*arr)[4],int x, int y){
    int sum =0;
    for(int i =0;i< x;i++){
        for(int j =0 ;j<y;j++){
            sum+=*(*(arr+i)+j);
        }
    }
    return sum;
}
void makeDouble(int (*arr)[4],int x,int y){
    for(int i = 0;i< x;i++){
        for(int j=0;j<y;j++){
            *(*(arr+i)+j) = 2* (*(*(arr+i)+j));
        }
    }
}
int main(){
    int array[][4]={{1,2,3,4},{5,6,7,8},{1,1,2,3}};
    int row_size = sizeof(array)/sizeof(array[0]);
    int col_size = sizeof(array[0])/sizeof(array[0][0]);
    cout<<makeSummation(array,row_size,col_size)<<endl;
    makeDouble(array,row_size,col_size);
    printArray(array,row_size,col_size);



}
