//{ Driver Code Starts
#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;



/* Function to print an array */
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}


// } Driver Code Ends
class Solution
{
    public:
    void merge(int arr[], int l, int mid, int r)
    {
        vector<int> ans;
        int i = l , j = mid+1;
        while(i<=mid && j<= r){
            if(arr[i] <= arr[j]){
                ans.push_back(arr[i]);
                i++;
            }
            else{
                ans.push_back(arr[j]);
                j++;
            }
        }
        while(i<=mid){
            ans.push_back(arr[i]);
            i++;
        }
        while(j<=r){
            ans.push_back(arr[j]);
            j++;
        }
        // for(int i = l ; i<= r; i++){
        //     arr[i] = ans[i-l];
        // }
        
        for(int i = 0,j = l; i<(r-l)+1; i++, j++){
            arr[j]= ans[i];
        }
    }
    public:
    void mergeSort(int arr[], int l, int r)
    {
        if(l>=r) return;
        int mid = (l+r)/2;
        mergeSort(arr , l , mid);
        mergeSort(arr , mid+1 , r);
        merge(arr , l , mid , r);
    }
};

//{ Driver Code Starts.


int main()
{
    int n,T,i;

    scanf("%d",&T);

    while(T--){
    
    scanf("%d",&n);
    int arr[n+1];
    for(i=0;i<n;i++)
      scanf("%d",&arr[i]);

    Solution ob;
    ob.mergeSort(arr, 0, n-1);
    printArray(arr, n);
    }
    return 0;
}
// } Driver Code Ends