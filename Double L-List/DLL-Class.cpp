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

class DLinkList{
public:
    Node* head = NULL;
    Node* tail = NULL;
    int size = 0;

    void insertAtHead(int data)
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
    void insertAtEnd(int data)
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

    void insertAtIdx(int idx, int val)
    { 
        if(idx<0 && idx>size)
            return;
        else if(idx==0)
        { 
            insertAtHead(val);
        }
        else if(idx==size)
        { 
            insertAtEnd(val);
        }
        else
        { 
            Node*t = new Node(val);
            Node* temp = head;
            for(int i=1;i<=idx-1;i++)
            { 
                temp = temp->next;
            }
            t->next = temp->next;
            temp->next = t;
            t->prev = temp;
            t->next->prev = t;
            size++;
        }

    }
    int getAtIdx(int idx)
    { 
        if(idx<0 || idx>=size){
            cout<<"Invalid Index "<<endl;
            return -1;
        }
        else if(idx==0)
        { 
            return head->val;
        }
        else if(idx==size-1)
        { 
            return tail->val;
        }
        else
        { 
            Node* temp = head;
            for(int i=1;i<=idx;i++)
            { 
                temp = temp->next;
            }
            return temp->val;
        }
        return 0;
    }
    void deleteAtHead()
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
    void deleteAtTail()
    { 
        if(size==0)
        { 
            return;
        }
        else if(size==1){
            deleteAtHead();
            return;
        }
        Node* temp = tail->prev;
        temp->next = NULL;
        tail = temp;
        size--;
    }
    void deleteAtIdx(int idx)
    { 
        if(size==0)
        {
            return;
        }
        else if(idx<0 || idx>=size)
        { 
            return;
        }
        else if(idx==0)
        { 
            return deleteAtHead();
        }
        else if(idx==size-1)
        { 
            return deleteAtTail();
        }
        else{
            Node* temp = head;
            for(int i=1;i<=idx-1;i++)
            { 
                temp = temp->next;
            }
            temp->next = temp->next->next;
            temp->next->prev = temp;
            size--;
        }
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
    DLinkList dll;
    dll.insertAtEnd(10);
    dll.insertAtEnd(20);
    dll.insertAtEnd(30);
    dll.insertAtEnd(40);
    dll.insertAtHead(50);
    dll.insertAtHead(60);
    dll.insertAtHead(70);
    dll.insertAtIdx(2,100);
    dll.insertAtIdx(3,200);
    dll.insertAtIdx(4,300);
    dll.display();
    dll.deleteAtTail();
    dll.display();
    dll.deleteAtHead();
    dll.display();

}