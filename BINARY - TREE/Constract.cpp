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
void LevOrder(Node* root){     // Breadth First Search
    queue<Node*> q;
    q.push(root);
    while(!q.empty()){
        int n = q.size();
        //Node* temp = q.front;
        for(int i=0;i<n;i++){
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
    // while(q.size()>0){
    //     Node* temp = q.front();
    //     q.pop();
    //     cout<<temp->val<<" -> ";
    //     if(temp->left!=NULL){
    //         q.push(temp->left);
    //     }
    //     if(temp->right!=NULL){
    //         q.push(temp->right);
    //     }
    // }
    cout<<endl;
}
int main(){
    vector<int> v{1,2,3,INT_MIN,INT_MIN,4,5,INT_MIN,6,7,INT_MIN,8,9};
    Node* root = Create(v);
    LevOrder(root);
}
