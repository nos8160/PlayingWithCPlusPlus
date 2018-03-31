#include<iostream>
#include<string.h>
using namespace std;
template<class T>
void swappy(T *s,T *t){
    T temp;
    temp = *s;
    *s = *t;
    *t = temp;
}
template<class T>
T toNum(string str){
    T temp =0;
    for(int i =0;i<str.size();i++){
        temp = temp * 10+(str[i]-48);
    }
    return temp;
}
