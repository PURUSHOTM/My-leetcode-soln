//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to return the minimum cost of connecting the ropes.
    long long minCost(long long arr[], long long n) {
        priority_queue<long long , vector<long long>, greater<long long>>pq;
        for(int i = 0; i<n; i++){
            pq.push(arr[i]);
        }
        long long sum = 0;
        long long temp = 0;
        while(pq.size()>=2){
            sum += pq.top();
            pq.pop();
            sum += pq.top();
            pq.pop();
            temp += sum ;
            pq.push(sum);
            sum = 0;
        }
        return temp;
    }
};

// class Solution {
// public:
//     //Function to return the minimum cost of connecting the ropes.
//     long long minCost(long long arr[], long long n) {
//         priority_queue<long long, vector<long long>, greater<long long>> pq;
        
//         // Push all elements of the array into the min-heap priority queue.
//         for (int i = 0; i < n; i++) {
//             pq.push(arr[i]);
//         }
        
//         long long total_cost = 0;
//         while (pq.size() >= 2) {
//             long long sum = pq.top();
//             pq.pop();
//             sum += pq.top();
//             pq.pop();
//             total_cost += sum;
//             pq.push(sum);
//         }
        
//         return total_cost;
//     }
// };



//{ Driver Code Starts.

int main() {
    long long t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        long long i, a[n];
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        cout << ob.minCost(a, n) << endl;
    }
    return 0;
}

// } Driver Code Ends