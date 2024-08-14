#include<bits\stdc++.h>

using namespace std;

class Node{
public:
    int val;
    Node* next;

    Node(int val)
    { 
        this->val = val;
        this->next = NULL;
    }
};

class LinkList{
public:
    Node* head = NULL;
    Node* tail = NULL;
    int size = 0;

    void insertAtEnd(int data)
    { 
    Node* temp = new Node(data);
    if(size==0)
    {  
        head = tail = temp;
    }
    else{ 
        tail->next = temp;
        tail = temp;
    }
    size++;
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



int main()
{ 
    LinkList ll;
    ll.insertAtEnd(10);
    ll.display();
    ll.insertAtEnd(20);
    ll.display();
    ll.insertAtEnd(30);
    ll.display();

    return 0;
}