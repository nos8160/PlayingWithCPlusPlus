#include<iostream>
#include<stack>
using namespace std;
void showStack(stack<int> x){
    while(!x.empty()){
        cout<<x.top()<<endl;
        x.pop();
    }
}
int main(){
 stack<int> st;
 st.push(45);
 st.push(67);
 showStack(st);
 cout<<st.size()<<endl;
 cout<<st.empty()<<endl;
 cout<<st.top()<<endl;
}
