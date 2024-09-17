//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    int getMinDiff(vector<int> &arr, int k) {
        // code here
        int mn = *min_element(arr.begin(),arr.end());
        int mx = *max_element(arr.begin(),arr.end());
        sort(arr.begin(),arr.end());
        int ans = mx-mn;
        int mn1 = mn+k;
        int mx1 = mx-k;
        for(int i = 0;i<arr.size();i++){
            int low = min(mn1,arr[i+1] - k);
            int high = max(mx1,arr[i] + k);
            if(low>=0){
                ans = min(ans,abs(high-low));
            }
        }
        
        return ans;
        
        
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        int n, k;
        cin >> k;
        cin.ignore();
        vector<int> a, b, c, d;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int num;
        while (ss >> num)
            a.push_back(num);

        Solution ob;
        auto ans = ob.getMinDiff(a, k);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends