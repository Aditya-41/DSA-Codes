#include<bits/stdc++.h>
using namespace std;
class Node{
public:
    int val;
    Node* left;
    Node* right;

    Node(int val){
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};
void display(Node* root){
    if(root==NULL){
        return;
    }
    cout<<root->val<<" -> ";
    display(root->left);      // Travels To left Node of Root
    display(root->right);     // Travels To right Node of Root
    return;
}
int sum(Node* root){
    if(root==NULL){
        return 0;
    }
    return root->val + sum(root->left) + sum(root->right);
}
int size(Node* root){
    if(root==NULL){
        return 0;
    }
    return 1 + size(root->left) + size(root->right);
}
int maxInTree(Node* root){
    if(root==NULL){
        return INT_MIN;
    }
    int Lmax = maxInTree(root->left);
    int Rmax = maxInTree(root->right);
    return max(root->val,max(Lmax,Rmax));
}
int MinInTree(Node* root){
    if(root==NULL){
        return INT_MAX;
    }
    int LeftMin = MinInTree(root->left);
    int RightMin = MinInTree(root->right);
    return min(root->val,max(LeftMin,RightMin));
}
int level(Node* root){
    if(root==NULL){
        return 0;
    }

    return 1+max(level(root->left),level(root->right));
}
void nThLevel(Node* root,int curr,int level){
    if(root==NULL){
        return;
    }
    if(curr==level){
        cout<<root->val<<" -> ";
        return;
    }
    nThLevel(root->left,curr+1,level);      // Travels To left Node of Root
    nThLevel(root->right,curr+1,level);     // Travels To right Node of Root
    return;
}
void LevOrder(Node* root){     // Breadth First Search
    queue<Node*> q;
    q.push(root);
    while(q.size()>0){
        Node* temp = q.front();
        q.pop();
        cout<<temp->val<<" -> ";
        if(temp->left!=NULL){
            q.push(temp->left);
        }
        if(temp->right!=NULL){
            q.push(temp->right);
        }
    }
    cout<<endl;
}
int main(){
    Node* a = new Node(1);
    Node* b = new Node(2);
    Node* c = new Node(3);
    Node* d = new Node(4);
    Node* e = new Node(78);
    Node* f = new Node(-1);
    Node* g = new Node(7);

    a->right = c;
    a->left = b;
    b->left = d;
    b->right = e;
    c->left = f;
    c->right = g;

    // display(a);
    // cout<<endl;
    // nThLevel(a,1,3)
    LevOrder(a);
    

}