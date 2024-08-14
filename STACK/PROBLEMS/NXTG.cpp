#include<bits\stdc++.h>
using namespace std;

int main(){
    int arr[] = {3,1,2,7,4,6,2,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    stack<int> st;
    int ans [n];

    ans[n-1] = -1;
    st.push(arr[n-1]);
    for(int i=n-2;i>=0;i--){
        while(st.size()>0 && arr[i]>=st.top()){
            st.pop();
        }
        if(st.size()==0){
            ans[i] = -1;
        }
        else{
            ans[i] = st.top();
        }
        st.push(arr[i]);
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" -> ";
    }
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<ans[i]<<" -> ";
    }
}