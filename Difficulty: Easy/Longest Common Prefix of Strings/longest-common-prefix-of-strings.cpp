//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:

    string longestCommonPrefix(vector<string> arr) {
        // your code here
        string ans="";
        sort(arr.begin(),arr.end());
        int f=0;
        for(int i=0;i<arr[0].size();i++)
        {
            for(int j=1;j<arr.size();j++)
            {
                if(arr[0][i] != arr[j][i])
                {
                    f=1;
                    break;
                }
            }
            if(!f )
                ans += arr[0][i];
            if(ans == "")
                    return "-1";
            if(f) break;
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
        vector<string> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        string number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        cout << ob.longestCommonPrefix(arr) << endl;
    }
}

// } Driver Code Ends