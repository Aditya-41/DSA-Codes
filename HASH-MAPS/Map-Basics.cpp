#include<bits\stdc++.h>
using namespace std;

int main(){
    unordered_map<string, int> m;
    pair<string,int> p1;

    p1.first = "Aditya";
    p1.second = 41;
    m.insert(p1);
    m["vishal"] = 51;

    for(auto p : m){
        cout<<p.first<<" -> "<<p.second<<endl;
    }
    cout<<"Size of Map is"<<" "<<m.size()<<endl;
    m.erase("vishal");

    for(auto p : m){
        cout<<p.first<<" -> "<<p.second<<endl;
    }
    cout<<"Size of Map is"<<" "<<m.size()<<endl;
}