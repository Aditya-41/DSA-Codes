#include<bits\stdc++.h>

using namespace std;

class Node{
public:
    int val;
    Node*next;

    Node(int val){
        this->val = val;
        this->next = NULL;
    }
};

class LinkList{
public:
    Node* head = NULL;
    Node* tail = NULL;
    int size = 0;
    void insertAtHead(int val){ 
        Node* temp = new Node(val);
        if(size==0){
         
            head = tail = temp;
        }
        else{
            temp->next = head;
            head = temp;

        }
        size++;
    }
    void insertAtEnd(int val)
    { 
        Node* temp = new Node(val);
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
        if(idx<0 || idx>size)
        { 
            return;
        }
        else if(idx==0)
        { 
            insertAtHead(val);
        }
        else if(idx==size)
        { 
            insertAtEnd(val);
        }
        else{
            Node* temp = head;
            Node* t = new Node(val);
            for(int i=1;i<idx-1;i++)
            { 
                temp = temp->next;
            }
            t->next = temp->next;
            temp->next = t;
            size++;
        }
    }
    void getAtIdx(int idx)
    { 
        if(idx<0 || idx>=size)
        { 
            return;
        }
        else if(idx==0)
        { 
            cout<<head->val<<endl;
        }
        else if(idx==size-1)
        { 
            cout<<tail->val<<endl;
        }
        else{
            Node* temp = head;
            for(int i=1;i<=idx;i++)
            { 
                temp = temp->next;
            }
            cout<<temp->val<<endl;
        }

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
        if(idx<0 || idx>=size)
        { 
            return;
        }
        else if(idx==0)
        { 
            deleteAtHead();
        }
        else if(idx==size-1)
        { 
            deleteAtTail();
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
    int opt,d,idx;
    while(1)
    { 
        cout<<"\n Single Linked List\n"<<endl;
        cout<<"\nmenu\n1.Insert at idx\n2.Get Value\n3.display\n4.Delete a Node \n Enter option: "<<endl;;
        cin>>opt;
        if(opt>4)
            break;
        switch(opt)
        { 
            case 1:
                cout<<" Add data at index : "<<endl;
                cin>>idx;
                cout<<"Enter a data to insert : "<<endl;
                cin>>d;
                ll.insertAtIdx(idx, d);
                break;
            case 2:
                cout<<"Enter a index to get data : "<<endl;
                cin>>d;
                ll.getAtIdx(d);
                break;
            case 3:
                ll.display();
                break;
            case 4: 
                cout<<"Enter a index of Node to delete : "<<endl;
                cin>>d;
                ll.deleteAtIdx(d);
                break;
        }
    }


    return 0;
}