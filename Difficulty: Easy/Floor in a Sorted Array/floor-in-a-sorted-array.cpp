//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
  #define ll long long
    // Function to find floor of x
    // n: size of vector
    // x: element whose floor is to find
    int findFloor(vector<long long> &v, long long n, long long x) {
        // Your code here
        if(x<v[0]) return -1;
        ll l = 0, r = n-1;
        ll mid = l + (r-l)/2;
        while(l<=r){mid-1;
            mid = l + (r-l)/2;
            if(v[mid]==x) return mid;
            if(v[mid]< x && v[mid+1] > x) return mid;
            if(v[mid]>x) r = mid-1;
            else l = mid + 1;
        }
        return mid;
    }
};


//{ Driver Code Starts.

int main() {

    long long t;
    cin >> t;

    while (t--) {
        long long n;
        cin >> n;
        long long x;
        cin >> x;

        vector<long long> v;

        for (long long i = 0; i < n; i++) {
            long long temp;
            cin >> temp;
            v.push_back(temp);
        }
        Solution obj;
        cout << obj.findFloor(v, n, x) << endl;
    }

    return 0;
}
// } Driver Code Ends