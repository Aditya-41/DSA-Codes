#include<bits\stdc++.h>
using namespace std;

#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

vector<int> solution(vector<int> &A) {
    int n = A.size();
    // Sort the array A to start assigning heights from largest possible values
    //sort(A.begin(), A.end());
    
    set<int> usedHeights;  // To keep track of already used heights
    vector<int> B(n);      // Result array to store final heights
    
    for (int i = n - 1; i >= 0; --i) {
        int height = A[i];
        // Ensure the height is unique and has not been used already
        while (usedHeights.count(height) && height > 0) {
            height--;
        }
        // Assign the height and mark it as used
        B[i] = height;
        usedHeights.insert(height);
    }
    
    return B;
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
    vector<int> A2 = {2,5, 4, 5, 5};
    vector<int> result2 = solution(A2);
    cout << "Example 2: ";
    for (int h : result2) {
        cout << h << " ";
    }
    cout << endl;
    
    return 0;
}
