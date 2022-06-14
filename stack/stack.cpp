#include<iostream>
#include<stack>
using namespace std;

int main(){
    stack<int> s;
    s.push(2);
    s.push(3);

    s.pop();
    cout<<s.top()<<endl;
    if(s.empty()){
        cout<<"stack is empty";

    }
    else{
        cout<<"stack is not empty";
    }
    return 0;
}