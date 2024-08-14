#include<bits\stdc++.h>
using namespace std;

int minProduct(vector<int> &a){
    int cn=0,cz=0,cp=0;
    int prod_pos = 1;
    int prod_neg = 1;
    int large_neg = INT_MIN;
    for(int i=0;i<a.size();i++){
        if(a[i]<0){
            cn++;
            prod_neg*=a[i];
            large_neg = max(large_neg,a[i]);
        }
        else if(a[i]>0){
            cp++;
            prod_pos*=a[i];
        }
        else{
            cz++;
        }
    }
    if(cn==0){
        if(cz>0){
            return 0;
        }
        else{
            auto it = min_element(a.begin(),a.end());
            return *it;
        }
    }
    else{
        if(cn%2==0){
            return (prod_neg/large_neg)*prod_pos;
        }
        else{
            return prod_neg*prod_pos;
        }
    }
    return 0;
}
int main(){
    vector<int> v {-2,-3,1,4,-2};
    cout<<minProduct(v)<<endl;
    return 0;
}