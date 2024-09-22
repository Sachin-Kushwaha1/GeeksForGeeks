//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function template for C++

class Solution {
  public:
    int lps(string str) {
        // Your code goes here
        int n=str.length();
        int p=0,s=1,cnt=0,pos=0;
        while(p<n&&s<n){
            if(str[p]==str[s]){
                p++;
                s++;
                cnt++;
            }
            else{
                pos++;
                s=pos;
                cnt=0;
                p=0;
            }
        }
        return cnt;
    }
};

//{ Driver Code Starts.

int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        string str;
        cin >> str;

        Solution ob;

        cout << ob.lps(str) << "\n";
    }

    return 0;
}

// } Driver Code Ends