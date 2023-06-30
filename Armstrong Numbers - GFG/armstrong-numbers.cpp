//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    string armstrongNumber(int x){
        int n = x;
        int sum = 0;
        int digit1 = n%10;
        int cube = digit1*digit1*digit1;
        sum += cube;
        n= n/10;
        
        // cout<<sum<<" ";
        int digit2 = n%10;
        int cube2 = digit2*digit2*digit2;
        sum += cube2;
        n= n/10;
        // cout<<sum<<" ";
        int digit3 = n%10;
        int cube3 = digit3*digit3*digit3;
        sum += cube3;
        n= n/10;
        
        if(sum == x) return {"Yes"};
        else return {"No"}; 
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
        cout << ob.armstrongNumber(n) << endl;
    }
    return 0;
}

// } Driver Code Ends