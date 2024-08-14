#include<bits\stdc++.h>
using namespace std;
void PushAtB(int val, stack<int>& s){
    stack<int> temp;
    stack<int> dummy;
    while(s.size()){
        temp.push(s.top());
        s.pop();
    }
    s.push(val);
    while(temp.size()){
        s.push(temp.top());
        temp.pop();
    }
}
void display(stack<int> temp){
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
    display(s);
    PushAtB(60,s);
    display(s);
}