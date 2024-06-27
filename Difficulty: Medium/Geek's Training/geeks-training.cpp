//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int help(vector<vector<int>>& p, int i, int j, int n, vector<vector<int>>&dp)
    {
        if(i>=n) return 0;
        int l=0,r=0;
        if(j==0)
        {
            if(dp[i][j]!=-1) return dp[i][j];
            else
            {
                l = p[i][j] + help(p,i+1,j+1,n,dp);
                r = p[i][j] + help(p,i+1,j+2,n,dp);
                return dp[i][j] = max(l,r);
            }
        }
        if(j==1)
        {
            if(dp[i][j]!=-1) return dp[i][j];
            else{
                l = p[i][j] + help(p,i+1,j-1,n,dp);
                r = p[i][j] + help(p,i+1,j+1,n,dp);
                return dp[i][j] = max(l,r);
            }
            
        }
        if(j==2)
        {
            if(dp[i][j]!=-1) return dp[i][j];
            else
            {
                l = p[i][j] + help(p,i+1,j-1,n,dp);
                r = p[i][j] + help(p,i+1,j-2,n,dp);
                return dp[i][j] = max(l,r);
            }
        }
        return 0;
    }
    int maximumPoints(vector<vector<int>>& points, int n) {
        // Code here
        vector<vector<int>>dp(n, vector<int>(3,-1));
        int ans=0;
        int ans1 = help(points,0,0,n,dp);
        int ans2 = help(points,0,1,n,dp);
        int ans3 = help(points,0,2,n,dp);
        ans = max(ans1, max(ans2,ans3));
        return ans;
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> points;
        for (int i = 0; i < n; ++i) {
            vector<int> temp;
            for (int j = 0; j < 3; ++j) {
                int x;
                cin >> x;
                temp.push_back(x);
            }
            points.push_back(temp);
        }

        Solution obj;
        cout << obj.maximumPoints(points, n) << endl;
    }
    return 0;
}
// } Driver Code Ends