//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    void help(vector<vector<int>> mat, vector<string> &ans, int i, int j, string &s, int n, vector<vector<int>>&v)
    {
        v[i][j]=1;
        
        if(i == n-1 && j == n-1 )
        {
            ans.push_back(s);
            // return;
        }
        if( i>=0  and i<n and j>=0 and j<n){
            if(i+1<n and j<n and mat[i+1][j] and !v[i+1][j])
            {
                s += "D";
                help(mat,ans,i+1,j,s,n,v);
                s.pop_back();
            }
            if(j+1<n and i<n and mat[i][j+1] and !v[i][j+1])
            {
                s += "R";
                help(mat,ans,i,j+1,s,n,v);
                s.pop_back();
            }
            if(i-1>=0 and j<n and mat[i-1][j] and !v[i-1][j])
            {
                s += "U";
                help(mat,ans,i-1,j,s,n,v);
                s.pop_back();
            }
            if(i<n and j-1>=0 and mat[i][j-1] and !v[i][j-1])
            {
                s += "L";
                help(mat,ans,i,j-1,s,n,v);
                s.pop_back();
            }
        }
        v[i][j]=0;
    }
    vector<string> findPath(vector<vector<int>> &mat) {
        // Your code goes here
        vector<vector<int>>v(mat.size(),vector<int>(mat.size(),0));
        vector<string>ans;
        string s="";
        int n=mat.size();
        if(mat[0][0]==0) return {"-1"};
        int i=0,j=0;
        help(mat, ans, i, j, s, n, v);
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
        vector<vector<int>> m(n, vector<int>(n, 0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> m[i][j];
            }
        }
        Solution obj;
        vector<string> result = obj.findPath(m);
        sort(result.begin(), result.end());
        if (result.size() == 0)
            cout << -1;
        else
            for (int i = 0; i < result.size(); i++)
                cout << result[i] << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends