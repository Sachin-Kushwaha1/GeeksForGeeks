//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int solve(int i, int W, int n, vector<int>& wt, vector<int>& val, vector<vector<int>>& dp){
        if(i>=n) return 0;
        if(dp[i][W]!=-1) return dp[i][W];
        int take = 0, nottake = 0;
        if(wt[i]<=W) take = val[i] + solve(i+1,W-wt[i],n,wt,val,dp);
        nottake = 0 + solve(i+1,W,n,wt,val,dp);
        return dp[i][W] = max(take, nottake);
    }
    // Function to return max value that can be put in knapsack of capacity W.
    int knapSack(int W, vector<int>& wt, vector<int>& val) {
        // Your code here
        int n = wt.size();
        vector<vector<int>> dp(n,vector<int>(1001,-1));
        return solve(0,W,n,wt,val,dp);
    }
};

//{ Driver Code Starts.

int main() {
    // taking total testcases
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        // reading number of elements and weight
        int n, w;
        vector<int> arr, val, wt, drr;
        string ip;
        int number;
        getline(cin, ip);
        stringstream ss(ip);

        while (ss >> number) {
            arr.push_back(number);
        }

        getline(cin, ip);
        ss.clear();
        ss.str(ip);

        while (ss >> number) {
            val.push_back(number);
        }

        w = arr[0];
        n = val.size();
        getline(cin, ip);
        ss.clear();
        ss.str(ip);

        while (ss >> number) {
            wt.push_back(number);
        }
        Solution ob;
        cout << ob.knapSack(w, wt, val) << endl;
    }
    return 0;
}
// } Driver Code Ends