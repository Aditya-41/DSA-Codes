#include<bits\stdc++.h>
using namespace std;

int main(){
    unordered_set<int> s;
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(5);
    cout<<s.size()<<endl;
    int target = 2;

    if(s.find(target)!=s.end()){
        cout<<"Exists"<<endl;
    }
    else{
        cout<<"Not-Exists"<<endl;
    }
    for(int i : s){
        cout<<i<<" ";
    }
}