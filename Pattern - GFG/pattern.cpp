//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution {
  public:
    void printDiamond(int n) {
        for(int i = 0; i<n; i++){
            for(int j = 0; j<n-i-1; j++){
                cout<<" ";
            }
            for(int k = 0; k<i+1;k++){
                cout<<"*"<<" ";
            }
            cout<< endl;
            
        }
        
        for(int i = 0; i<n; i++){
            
            for(int m = 0; m<i; m++){
                cout<<" ";
            }
            for(int x = 0; x<n-i; x++){
                cout<<"*"<<" ";
            }
            cout<<endl;
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
        ob.printDiamond(n);
    }
    return 0;
}
// } Driver Code Ends