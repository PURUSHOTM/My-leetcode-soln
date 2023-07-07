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
        // if(i == n) return;
        // int j = i;
        // int temp = arr[i];
        // while(j>0){
        //     if(arr[j-1] > temp){
        //         arr[j] = arr[j-1];
        //     }
        //     else{
        //         break;
        //     }
        //     j--;
        // }
        // arr[j] = temp;
        
         
        if (i == n) return;

        int j = i;
        while (j > 0 && arr[j - 1] > arr[j]) {
            int temp = arr[j - 1];
            arr[j - 1] = arr[j];
            arr[j] = temp;
            j--;
        }

        insert(arr, n , i+1);
    } 
    public:
    void insertionSort(int arr[], int n)
    {
        for(int i = 1; i<n; i++){
             insert(arr , n , i); 
            
        }
    } 
};

 


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