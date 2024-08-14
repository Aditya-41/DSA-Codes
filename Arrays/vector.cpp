#include<iostream>
#include<vector>
using namespace std;

int main()
{ 
    vector<int>v;

    v.push_back(10);
    v.push_back(70);
    v.push_back(30);
    v.push_back(45);
    v.push_back(9);




    for(int i=0;i<v.size();i++)
    { 
        cout<<v[i]<<" ";
    }



}