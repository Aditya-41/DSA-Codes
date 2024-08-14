#include<bits\stdc++.h>

using namespace std;

class Stack{
public:
    int arr[5];
    int idx;

    Stack(){
        idx =-1;
    }
    void push(int val){
        if(idx == sizeof(arr)/sizeof(arr[0])-1){
            cout<<" Stack Overflow "<<endl;
            return;
        }
        idx++;
        arr[idx] = val;
    }
    void pop(){
        if(idx==-1){
            cout<<"Stack UnderFlow"<<endl;
            return;
        }
        idx--;
    }
    int top(){
        if(idx==-1){
            cout<<"Stack UnderFlow"<<endl;
            return -1;
        }
        return arr[idx];
    }
    void display(){
        if(idx==-1){
            cout<<"Stack UnderFlow"<<endl;
            return;
        }
        for(int i=idx;i>=0;i--){
            cout<<arr[i]<<" -> ";
        }
        cout<<endl;
    }
};

int main(){
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.display();
    s.pop();
    s.display();
    s.push(60);
    s.display();
    return 0;
}