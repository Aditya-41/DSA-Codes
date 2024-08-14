#include<bits\stdc++.h>
using namespace std;
void reverse(queue<int> &q){
    stack<int> st;
    while(!q.empty()){
        st.push(q.front());
        q.pop();
    }
    while(!st.empty()){
        q.push(st.top());
        st.pop();
    }
}
void display(queue<int> &q){
    int n = q.size();
    while(n>0){
        int x = q.front();
        cout<<x<<" -> ";
        q.pop();
        q.push(x);
        n--;
    }
    cout<<endl;
    
}
int main(){
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    display(q);
    reverse(q);
    display(q);
}