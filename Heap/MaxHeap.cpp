#include<bits/stdc++.h>
using namespace std;

class Maxheap{
    vector<int> hp;
    public:
        void upheap(int ci){
            while(ci>0){
                int pi = (ci-1)/2;
                if(hp[pi]<hp[ci]){
                    swap(hp[pi],hp[ci]);
                    ci = pi;
                }
                else{
                    break;
                }
            }
            return;
        }
        void push(int val){
            hp.push_back(val);
            upheap(hp.size()-1);
            return;
        }
        bool empty(){
            return hp.size()==0;
        }
        void display(){
            cout<<"[";
            for(int i=0;i<hp.size();i++){
                cout<<hp[i]<<" ";
            }
            cout<<"]"<<endl;
            return;
        }
};
int main(){
    Maxheap h1;
    h1.push(3);
    h1.push(4);
    h1.push(11);
    h1.push(9);
    h1.push(14);
    h1.push(-1);
    h1.push(30);
    h1.push(44);
    h1.push(50);
    h1.display();
    return 0;
}