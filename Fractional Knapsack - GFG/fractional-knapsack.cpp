//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct Item{
    int value;
    int weight;
};


// } Driver Code Ends
//class implemented
/*
struct Item{
    int value;
    int weight;
};
*/


class Solution
{
    public:
    static bool cmp(Item a , Item b){
        double x = (double)a.value/(double)a.weight;
        double y = (double) b.value/(double)b.weight;
        return x> y;
    }
    //Function to get the maximum total value in the knapsack.
    double fractionalKnapsack(int W, Item arr[], int n)
    {
         
        sort(arr, arr+n , cmp);
        
        double total = 0;
        double currweight = 0;
        for(int i = 0; i<n; i++){
            if(currweight + arr[i].weight <= W){
                currweight += arr[i].weight ;
                total += arr[i].value; 
            } else {
                int remain = W - currweight;
                total += ((double)arr[i].value / (double)arr[i].weight) * (double)remain;
                break;
            }
        }
        return total;
    }
        
};


//{ Driver Code Starts.
int main()
{
	int t;
	//taking testcases
	cin>>t;
	cout<<setprecision(2)<<fixed;
	while(t--){
	    //size of array and weight
		int n, W;
		cin>>n>>W;
		
		Item arr[n];
		//value and weight of each item
		for(int i=0;i<n;i++){
			cin>>arr[i].value>>arr[i].weight;
		}
		
		//function call
		Solution ob;
		cout<<ob.fractionalKnapsack(W, arr, n)<<endl;
	}
    return 0;
}
// } Driver Code Ends