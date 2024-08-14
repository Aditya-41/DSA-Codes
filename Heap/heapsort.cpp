#include<bits\stdc++.h>
using namespace std;

int main(){
    vector<int> v{4,7,2,6,1,9,0};
    priority_queue<int,vector<int>,greater<int>> pq;

    for(auto i : v){
        pq.push(i);
    }
    int idx = 0;
    while(pq.size()>0){
        v[idx]=pq.top();
        pq.pop();
        idx++;
    }
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    return 0;
}