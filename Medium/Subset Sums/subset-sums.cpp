//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    void ss(vector<int>arr, int n, int i, int&s, vector<int>&ans)
    {
        if(i>=n)
        {
            ans.push_back(s);
            return;
        }
        
        s+=arr[i];
        ss(arr,n,i+1,s,ans);
        s-=arr[i];
        ss(arr,n,i+1,s,ans);
    }
    vector<int> subsetSums(vector<int> arr, int n) {
        // Write Your Code here
        vector<int>ans;
        int s=0;
        ss(arr,n,0,s,ans);
        return ans;
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
        Solution ob;
        vector<int> ans = ob.subsetSums(arr, N);
        sort(ans.begin(), ans.end());
        for (auto sum : ans) {
            cout << sum << " ";
        }
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends