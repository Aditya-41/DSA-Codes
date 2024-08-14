#include<bits/stdc++.h>
using namespace std;
void display(queue<int> q){
    int n = q.size();
    while(n>0){
        int x = q.front();
        q.pop();
       // q.push(x);
        cout<<x<<" -> ";
        n--;
    }
    cout<<endl;
}
void reverseK(int k, queue<int> &q){
    stack<int> st;
    for(int i=0;i<k;i++){
        int x = q.front();
        st.push(x);
        q.pop();
    }
   // int z = q.size();
    while(st.size()>0){
        q.push(st.top());
        st.pop();
    }
    int n = q.size();
    for(int i=0;i<n-k;i++){
        int g = q.front();
        q.pop();
        q.push(g);
    }
}
int main(){
    queue<int> q;
    
    int k = 3;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    int n = q.size();
    display(q);
    display(q);

   reverseK(k,q);
    display(q);
}