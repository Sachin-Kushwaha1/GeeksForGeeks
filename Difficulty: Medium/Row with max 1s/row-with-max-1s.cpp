//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:
    int rowWithMax1s(vector<vector<int> > &arr) {
        // code here
        int ans=-1;
        int n=arr.size();
        int m=arr[0].size();
        int i=0;
        int j=m-1;
        while(i<n && j>=0)
        {
           if(arr[i][j])
           {
               ans = i;
            //   cout<<"row="<<i<<endl;
               --j;
           }
           else {
               ++i;
            //   cout<<"col="<<j<<endl;
           }
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int> > arr(n, vector<int>(m));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> arr[i][j];
            }
        }
        Solution ob;
        auto ans = ob.rowWithMax1s(arr);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends