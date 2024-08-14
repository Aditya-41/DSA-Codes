#include<bits\stdc++.h>

using namespace std;

class Node{
public:
    int val;
    Node* next;
    Node* prev;
    Node(int val)
    { 
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

class Dequeue{
public:
    Node* head = NULL;
    Node* tail = NULL;
    int size = 0;

    void PushFront(int data)
    { 
        Node* temp = new Node(data);
        if(size==0)
        {  
            head = tail = temp;
        }
        else{ 
            temp->next = head;
            head->prev = temp;
            head = temp;
        }
        size++;
    }
    void PushBack(int data)
    { 
        Node* temp = new Node(data);
        if(size==0)
        {  
            head = tail = temp;
        }
        else{ 
            tail->next = temp;
            temp->prev = tail;
            tail = temp;
        }
        size++;
    }

    void PopFront()
    { 
        if(size==0)
        { 
            return;
        }
        head = head->next;
        if(head) head->prev = NULL;
        if(head==NULL) tail = NULL;
        size--;
    }
    void PopBack()
    { 
        if(size==0)
        { 
            return;
        }
        else if(size==1){
            PopFront();
            return;
        }
        Node* temp = tail->prev;
        temp->next = NULL;
        tail = temp;
        size--;
    }
    void getFront(){
        if(size==0){
            cout<<"Dequeue Is Empty"<<endl;
            return;
        }
        cout<<head->val<<endl;
    }
    void getBack(){
        if(size==0){
            cout<<"Dequeue Is Empty"<<endl;
            return;
        }
        cout<<tail->val<<endl;
    }
    void display()
    { 
        Node* temp = head;
        while(temp!=NULL)
        { 
            cout<<temp->val<<" -> ";
            temp = temp->next;
        }
        cout<<endl;
    }


};

int main(){
    Dequeue d;

    d.PushBack(20);
    d.PushFront(10);
    d.PushBack(30);
    d.PushBack(40);
    d.PushBack(50);
    d.display();

    d.getBack();
    d.getFront();




}