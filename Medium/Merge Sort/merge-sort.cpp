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
    void merge(int arr[], int l, int m, int r)
    {
         // Your code here
         vector<int> temp;
         
         int ll=l,lr=m+1;
         while(ll<=m && lr<=r)
         {
             if(arr[ll]>arr[lr]){
                 temp.push_back(arr[lr]);
                 lr++;
             }
             else{
                 temp.push_back(arr[ll]);
                 ll++;
             }
         }
         while(lr<=r)
         {
            temp.push_back(arr[lr++]);
         }
         while(ll<=m)
         {
            temp.push_back(arr[ll++]);
         }
         int j=0;
         for(int i=l;i<=r;i++)
         {
            //  cout<<temp[j++];
             arr[i]=temp[j++];
         }
        // cout<<endl;

    }
    public:
    void mergeSort(int arr[], int l, int r)
    {
        //code here
         if(l>=r)return;
        int mid=(l+r)/2;
        // if(r<l) return ;
        mergeSort(arr,l,mid);
        mergeSort(arr,mid+1,r);
        merge(arr,l,mid,r);

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