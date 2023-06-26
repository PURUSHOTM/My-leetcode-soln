//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution {
  public:
    void printTriangle(int n) {
        int j = 1; 
        for(int i = 0; i<n; i++){
            if(i%2 == 0) j = 1;
            else j = 0;
            for(int k = 0; k<=i;k++){
                cout<<j<<" ";
                j = 1-j;
            }
            cout<< endl;
        }
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        Solution ob;
        ob.printTriangle(n);
    }
    return 0;
}
// } Driver Code Ends