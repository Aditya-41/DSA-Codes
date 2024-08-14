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
Node* Create(vector<int> &v){
    int n = v.size();
    queue<Node*>q;
    Node* root = new Node(v[0]);
    q.push(root);
    int i = 1;
    int j = 2;

    while(q.size()>0 && i<n){
        Node* temp = q.front();
        q.pop();
        Node* l;
        Node* r;

        if(v[i]!=INT_MIN){
            l = new Node(v[i]);
        }
        else{
            l = NULL;
        }
        if(j!=n && v[j]!=INT_MIN){
            r = new Node(v[j]);
        }
        else{
            r = NULL;
        }
        temp->left = l;
        temp->right = r;

        if(l!=NULL){
            q.push(l);
        }
        if(r!=NULL){
            q.push(r);
        }
        i+=2;
        j+=2;
    }
    return root;
}
void leftBoundary(Node* root){
    if(root==NULL){
        return;
    }
    if(root->left==NULL && root->right==NULL){
        return;
    }
    cout<<root->val<<" -> ";
    leftBoundary(root->left);
    if(root->left==NULL){
        leftBoundary(root->right);
    }
}
void rightBoundary(Node* root){
    if(root==NULL){
        return;
    }
    if(root->left==NULL && root->right==NULL){
        return;
    }
    cout<<root->val<<" -> ";
    rightBoundary(root->right);
    if(root->right==NULL){
        rightBoundary(root->left);
    }
}
void bottomBoundary(Node* root){
    if(root==NULL){
        return;
    }
    if(root->left==NULL && root->right==NULL){
        cout<<root->val<<" -> ";
    }
    bottomBoundary(root->left);
    bottomBoundary(root->right);
}
void Boundary(Node* root){
    leftBoundary(root);
    cout<<endl;
    bottomBoundary(root);
    cout<<endl;
    rightBoundary(root->right);
    cout<<endl;
}
int main(){
    vector<int> v{1,2,3,INT_MIN,INT_MIN,4,5,INT_MIN,6,7,INT_MIN,8,9};
    Node* root = Create(v);
    Boundary(root);
}
