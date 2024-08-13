//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// Function to find square root
// x: element to find square root
class Solution {
  public:
  #define lli long long int
    long long int floorSqrt(long long int n) {
        // Your code goes here
        lli l=1,r=n;
        lli mid = l + (r-l)/2;
        while(l<=r)
        {
            mid = l + (r-l)/2;
            if(mid*mid == n) return mid;
            else if(mid*mid > n) r=mid-1;
            else    l = mid+1;
        }
        return l-1;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        Solution obj;
        cout << obj.floorSqrt(n) << endl;
    }
    return 0;
}

// } Driver Code Ends