//{ Driver Code Starts
// C program for insertion sort
#include <stdio.h>
#include <math.h>

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
    void insert(int arr[],int n , int i)
    {
        int j = i;
        int temp = arr[i];
        while(j>0 && arr[j-1] > temp){
            // if(arr[j-1] > temp){
                arr[j] = arr[j-1];
            // }
            j--;
        }
        arr[j] = temp;
    } 
     public:
     void insertionSort(int arr[], int n)
    {
        for(int i = 1; i<n; i++){
             insert(arr , n , i); 
            
        }
    } 
};





// class Solution {
// public:
//     void insert(int arr[], int n, int i) {
//         int j = i;
//         int key = arr[i]; // Store the current element to be inserted
//         while (j > 0 && arr[j - 1] > key) {
//             arr[j] = arr[j - 1]; // Shift elements greater than the key to the right
//             j--;
//         }
//         arr[j] = key; // Insert the key at its correct position
//     }

//     // Function to sort the array using insertion sort algorithm.
//     void insertionSort(int arr[], int n) {
//         for (int i = 1; i < n; i++) {
//             insert(arr, n, i);
//         }
//     }
// };


//{ Driver Code Starts.
int main()
{
    int arr[1000],n,T,i;

    scanf("%d",&T);

    while(T--){

    scanf("%d",&n);

    for(i=0;i<n;i++)
      scanf("%d",&arr[i]);

    Solution ob;
    ob.insertionSort(arr, n);
    printArray(arr, n);
    }
    return 0;
}

// } Driver Code Ends