#include<bits\stdc++.h>
using namespace std;
void display(stack <int> temp){
    while(temp.size()){
        cout<<temp.top()<<" -> ";
        temp.pop();
    }
    cout<<endl;
}
int main(){

    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);

    stack<int> s1;
    stack<int> s2;

    while(s.size()){
        s1.push(s.top());
        s.pop();
    }
    while(s1.size()){
        s2.push(s1.top());
        s1.pop();
    }
    while(s2.size()){
        s.push(s2.top());
        s2.pop();
    }
    display(s);
    display(s1);
    display(s2);
}