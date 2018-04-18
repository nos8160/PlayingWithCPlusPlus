#include<iostream>
#include<queue>
using namespace std;
int main(){

    queue <int > q;
    q.push(45);
    q.push(98);
    q.push(456);
    cout<<q.size()<<endl;
    q.pop();
    cout<<q.front()<<endl;
    cout<<q.back()<<endl;
}
