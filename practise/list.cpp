#include<iostream>
#include<list>
using namespace std;
void showList(list<int> ls){
    list<int>::iterator it;
    for(it = ls.begin();it!=ls.end();it++){
        cout<<*it<<endl;
    }
}
int main(){
    list<int> ls;
    for(int i =1;i<5;i++){
        ls.push_back(i*i);
    }
    showList(ls);
    ls.reverse();
    showList(ls);

}
