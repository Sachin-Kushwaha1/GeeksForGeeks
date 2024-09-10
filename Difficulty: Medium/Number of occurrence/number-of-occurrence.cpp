//{ Driver Code Starts
#include<bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	/* if x is present in arr[] then returns the count
		of occurrences of x, otherwise returns 0. */
	int count(int arr[], int n, int x) {
	    // code here
	    
        int i=0,j=n-1,p=-1;
        vector<int>v(2,-1);
        
        while (i<=j)
        {
            int mid=i+((j-i)/2);
            if (arr[mid]==x)
            {
                    p=mid;
                    j=mid-1;
            }
            else if(arr[mid]<x)
                i=mid+1;
            else
                j=mid-1;
        }
    
        v[0]=p;
        
        int l=0,r=n-1;
        while (l<=r)
        {
            int mid=l+((r-l)/2);
            if (arr[mid]==x)
            {
                p=mid;
                    l=mid+1;
            }
            else if(arr[mid]<x)
                l=mid+1;
            else
                r=mid-1;
        }
        v[1]=p;
        if(v[0]==-1) return 0;
        return v[1]-v[0]+1;
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.count(arr, n, x);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends