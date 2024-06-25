//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    void rot(vector<int>&v, int k)
    {
        int n=v.size();
        k = k%n;
        reverse(v.begin(), v.begin() + k);
        reverse(v.begin() + k, v.end());
        reverse(v.begin(),v.end());        
    }
    vector<vector<int>> rotateMatrix(int k, vector<vector<int>> mat) {
        // code here
        int m=mat.size();
        for(int i=0;i<m;i++)
            rot(mat[i],k);
        return mat;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m, k;
        cin >> n >> m >> k;
        vector<vector<int>> mat(n, vector<int>(m));
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                cin >> mat[i][j];
        Solution ob;
        vector<vector<int>> ans = ob.rotateMatrix(k, mat);
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++)
                cout << ans[i][j] << " ";
            cout << "\n";
        }
    }
}

// } Driver Code Ends