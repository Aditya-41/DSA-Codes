#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v{3,-4,-7,30,7,-9,2,1,6,-1};
    vector<int> ans;
    queue<int> q;
    int n = v.size();
    for(int i=0;i<n;i++){
        if(v[i]<0){
            q.push(i);
        }
    }
    int i=0;
    int k = 3;
    while(i+k<=n){
        while(q.size()>0 && q.front()<i){
            q.pop();
        }
        if(q.size()==0 || q.front()>=i+k){
            ans.push_back(0);
        }
        else{
            ans.push_back(v[q.front()]);
        }
        i++;
    }
    for(int i=0;i<n;i++){
        cout<<v[i]<<" -> ";
    }
    cout<<endl;
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" -> ";
    }
    cout<<endl;
}