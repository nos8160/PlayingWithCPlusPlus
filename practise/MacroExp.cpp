#include<iostream>
#if x==3
    #define y 3
#else
        #define y 4
#endif
#define a -b
#define b -c
#define c 5

using namespace std;
int main(){
    cout<<a<<endl;
    return 0;
}
