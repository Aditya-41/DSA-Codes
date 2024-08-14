#include<bits\stdc++.h>

using namespace std;

void display(stack<int> &s){
    if(s.size()==0){
        return;
    }
    int x = s.top();
    cout<<x<<" -> ";
    s.pop();
    display(s);
    s.push(x);
}
void displayRev(stack<int> &s){
    if(s.size()==0){
        return;
    }
    int x = s.top();
    
    s.pop();
    displayRev(s);
    cout<<x<<" -> ";
    s.push(x);
}
void PushBRec(stack<int> &s, int val){
    if(s.size()==0){
        s.push(val);
        return;
    }
    int x = s.top();
    
    s.pop();
    PushBRec(s,val);
   
    s.push(x);
}
void Reverse(stack<int> &s){
    if(s.size()==1){
        return;
    }
    int x = s.top();
    
    s.pop();
    Reverse(s);
    PushBRec(s,x);
   
    
}
int main(){
    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    //display(s);
    displayRev(s);
    cout<<endl;
    PushBRec( s,-10 );
    displayRev(s);
    cout<<endl;
    Reverse(s);
    displayRev(s);
    return 0;
}