//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    bool pal(vector<int>v)
    {
        vector<int>v1=v;
        reverse(v.begin(),v.end());
        if(v1==v) return true;
        return false;
    }
    string pattern(vector<vector<int>> &arr) {
        // Code Here
        for(int i=0;i<arr.size();i++)
        {
            if(pal(arr[i]))
            {
                string ans="";
                ans += to_string(i);
                ans += " R";
                return ans;
            }
        }
        for(int j=0;j<arr[0].size();j++)
        {
            vector<int>v;
            for(int i=0;i<arr.size();i++)
            {
                v.push_back(arr[i][j]);
            }
            if(pal(v))
            {
                string ans="";
                ans += to_string(j);
                ans += " C";
                return ans;
            }
        }
        return "-1";
    }
};


//{ Driver Code Starts.

int main() {

    int t, n, i, j, flag, k;
    cin >> t;

    while (t--) {
        cin >> n;
        vector<vector<int>> a(n, vector<int>(n));

        for (i = 0; i < n; i++) {
            for (j = 0; j < n; j++)
                cin >> a[i][j];
        }
        Solution ob;
        cout << ob.pattern(a) << endl;
    }
    return 0;
}
// } Driver Code Ends