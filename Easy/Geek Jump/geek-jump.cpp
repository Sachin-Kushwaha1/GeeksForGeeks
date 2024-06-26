//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int solve(int i, vector<int>&h, vector<int>&dp)
    {
        if(i<1) return 0;
        if(dp[i]!=-1) return dp[i];
        int l=solve(i-1,h,dp) + abs(h[i] - h[i-1]);
        int r=INT_MAX;
        if(i>1)
            r=solve(i-2,h,dp) + abs(h[i] - h[i-2]);
        return dp[i]=min(r,l);
        
    }
    int minimumEnergy(vector<int>& h, int n) {
        // Code here
        vector<int>dp(n+1,-1);
        return solve(n-1,h,dp);
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        vector<int> arr(N);
        for (int i = 0; i < N; i++) {
            cin >> arr[i];
        }
        Solution obj;
        cout << obj.minimumEnergy(arr, N) << "\n";
    }
    return 0;
}
// } Driver Code Ends