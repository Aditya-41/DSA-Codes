#include<bits\stdc++.h>
using namespace std;

class Queue{
public:
    int f;
    int b;
    vector<int> arr;

    Queue(int val){
        f = 0;
        b = 0;
        vector<int> v(val);
        arr = v;
    }

    void push(int data){
        if(b==arr.size()){
            cout<<"Queue is OverFlow"<<endl;
            return;
        }
        arr[b] = data;
        b++;

    }
    void pop(){
        if(arr.size()==0){
            cout<<"Queue is UnderFlow"<<endl;
            return;
        }
        f++;
    }
    void front(){
        if(arr.size()==0){
            cout<<"Queue is Empty"<<endl;
            return;
        }    
        cout<<arr[f]<<endl;   
    }
    void back(){
        if(arr.size()==0){
            cout<<"Queue is Empty"<<endl;
            return;
        }
        cout<<arr[b-1]<<endl;
    }
    bool empty(){
        if(arr.size()==0){
            return true;
        }
        return false;
    }
    int size(){
        return arr.size();
    }
    void display(){
        for(int i=f;i<b;i++){
            cout<<arr[i]<<" -> ";
        }
        cout<<endl;
    }
};

int main(){
    Queue q(6);
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.push(60);
    q.display();
    q.push(70);
    q.back();

    q.front();
    q.pop();
    q.front();
    q.display();
}