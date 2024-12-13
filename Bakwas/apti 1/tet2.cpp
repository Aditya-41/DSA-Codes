
#include<bits\stdc++.h>
using namespace std;

vector<int> solution(vector<int>& A){
    int n = A.size();
    set<int>s;
    vector<int>ans(n);
    map<int,int,greater<int>>m;
    map<int,vector<int>>id;
    for(int i=0;i<n;++i){
        ++m[A[i]];
        id[A[i]].push_back(i);
    }
    int v = 2e9;
    for(auto it : m){
        v = min(v,it.first);
        for(auto j : id[it.first]){
            ans[j] = v--;
        }
    }
    return ans;
    
}

int main() {
    // Example 1
    vector<int> A1 = {1, 2, 3};
    vector<int> result1 = solution(A1);
    cout << "Example 1: ";
    for (int h : result1) {
        cout << h << " ";
    }
    cout << endl;
    
    // Example 2
    vector<int> A2 = {9, 4, 3, 7, 7};
    vector<int> result2 = solution(A2);
    cout << "Example 2: ";
    for (int h : result2) {
        cout << h << " ";
    }
    cout << endl;
    
    return 0;
}