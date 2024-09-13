//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// Function to find square root
// x: element to find square root
#define ll long long int
class Solution {
  public:
    long long int floorSqrt(long long int n) {
        // Your code goes here
        ll i = 1, j = n/2;
        ll mid = i + (j-i)/2;
        while(i<=j){
            mid = i + (j-i)/2;
            ll x = mid*mid;
            ll y = (mid+1)*(mid+1);
            if( x == n || ( x<n && y>n )) return mid;
            if(x>n) j = mid-1;
            else i = mid+1;
        }
        return mid;
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