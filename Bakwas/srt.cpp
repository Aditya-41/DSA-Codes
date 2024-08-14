#include<bits/stdc++.h>
using namespace std;

bool cmp(pair<int,int> p1,pair<int,int> p2){
    if(p1.first == p2.first){
        return p1.second>p2.second;
    }
    return p1.first>p2.first;
}

int main(){
    vector<pair<int,int>> p;
    p.push_back({91,40});
    p.push_back({136,10});
    p.push_back({21,30});
    p.push_back({21,80});
    p.push_back({54,50});
    p.push_back({285,20});
    p.push_back({712,70});
    p.push_back({310,30});
    p.push_back({611,60});
    
    
    sort(p.begin(),p.end(),cmp);
    for(pair<int,int> i: p){
        cout<<i.first<<"->"<<i.second<<endl;
    }
}