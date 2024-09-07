//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// Function to return minimum number of jumps to end of array

class Solution {
  public:
    int minJumps(vector<int>& arr) {
        // Your code here
        // int n = arr.size();
        // int i=0, ans = 1;
        // int mx = 0, idx = 0;
        // while(i<n){
        //     if(!arr[i]) return -1;
        //     if(arr[i]+i>=n-1) return ans;
        //     for(int j=i+1; j<=arr[i]+i && j<n; ++j){
        //         if(arr[j]+i>=n-1) return ans+1;
        //         if(arr[j]>mx){
        //             mx = arr[j];
        //             idx = j;
        //         }
        //     }
        //     ++ans;
        //     if(idx == i) return -1;
        //     i = idx;
        //     mx = 0;
        // }
        // return -1;
        int n = arr.size();
        if (n == 1) return 0;
        if (arr[0] == 0) return -1;
        
        int jumps = 0, farthest = 0, currentEnd = 0;
        
        for (int i = 0; i < n - 1; ++i) {
            farthest = max(farthest, i + arr[i]);
            
            if (i == currentEnd) {
                ++jumps;
                currentEnd = farthest;
                
                if (currentEnd >= n - 1) return jumps;
            }
            
            if (i >= farthest) return -1;
        }
        
        return -1;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        int n, i, j;
        vector<int> arr;
        string ip;
        int number;
        getline(cin, ip);
        stringstream ss(ip);

        while (ss >> number) {
            arr.push_back(number);
        }
        Solution obj;
        cout << obj.minJumps(arr) << endl;
    }
    return 0;
}

// } Driver Code Ends