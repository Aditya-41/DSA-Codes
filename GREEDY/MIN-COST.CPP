#include<bits\stdc++.h>
using namespace std;


long long int mincost(int m, int n, vector<int> &x, vector<int> &y){
    sort(x.rbegin(),x.rend());
    sort(y.rbegin(),y.rend());
    int hz = 1;
    int vr = 1;
    int h = 0;
    int v = 0;
    long long int ans = 0;
    while(h<y.size() && v<x.size()){
        if(x[v]>y[h]){
            ans+= x[v]*vr;
            hz++;
            v++;
        }
        else{
            ans+=y[h]*hz;
            vr++;
            h++;
        }
    }
    while(h<y.size()){
        ans+= y[v]*hz;
        vr++;
        h++;
    }
    while(v<x.size()){
        ans+=x[h]*vr;
        hz++;
        v++;
    }
    return ans;
}
int main(){
    int m = 6;
    int n = 4;
    vector<int> x{2,1,3,4,};
    vector<int> y{4,1,2};
    
    cout<<mincost(m,n,x,y);
    return 0;
}