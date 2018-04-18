#include<iostream>
#include<vector>
using namespace std;
int main(){
    int x;
    vector<int> vec;
    vector<int>::iterator i;
    for(int i = 0 ;i< 5;i++){
        vec.push_back(i*12);
    }
    for( i =vec.begin();i!=vec.end();i++){
        cout<<*i<<endl;
    }
    cout<< vec.max_size()<<endl;
    cout<<vec.capacity()<<endl;

}
