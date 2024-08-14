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

    void insertAtHead(int data)
    { 
        Node* temp = new Node(data);
        if(size==0)
        {  
            head = tail = temp;
        }
        else{ 
            temp->next = head;
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
        size--;
    }
    void deleteAtTail()
    { 
        if(size==0)
        { 
            return;
        }
        Node* temp = head;
        while(temp->next!=tail)
        { 
            temp = temp->next;
        }
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



int main()
{ 
    LinkList ll;
    ll.insertAtEnd(10);
    ll.display();
    ll.insertAtEnd(20);
    ll.display();
    ll.insertAtEnd(30);
    ll.display();
    ll.insertAtHead(40);
    ll.display();
    ll.insertAtHead(50);
    ll.display();
    ll.insertAtIdx(3,80);
    ll.display();
  //  cout<<ll.getAtIdx(3)<<endl;
    ll.deleteAtHead();
    ll.deleteAtIdx(2);
    ll.display();
    ll.deleteAtTail();
    ll.display();
    ll.deleteAtIdx(2);
    ll.display();
    ll.deleteAtHead();
    ll.display();
    ll.deleteAtTail();
    ll.display();


    return 0;
}