//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int solve(int i, vector<int>&h, vector<int>&dp, int k)
    {
        if(i<1) return 0;
        if(dp[i]!=-1) return dp[i];
        int ml=INT_MAX;
        for(int j=1;j<=k;j++)
        {
            if(i-j<0) break;
            else{
                int l = solve(i-j,h,dp,k) + abs(h[i] - h[i-j]);
                ml = min(l,ml);
            }
        }
        return dp[i]=ml;
    }
    int minimizeCost(vector<int>& h, int n, int k) {
        // Code here
        vector<int>dp(n,-1);
        // for(auto it:dp) cout<<it<<endl;
        return solve(n-1,h,dp,k);
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, K;
        cin >> N >> K;
        vector<int> arr(N);
        for (int i = 0; i < N; i++) {
            cin >> arr[i];
        }
        Solution obj;
        cout << obj.minimizeCost(arr, N, K) << "\n";
    }
    return 0;
}
// } Driver Code Ends