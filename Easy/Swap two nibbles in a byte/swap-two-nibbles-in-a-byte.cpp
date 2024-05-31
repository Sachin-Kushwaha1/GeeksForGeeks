//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int swapNibbles(int n) {
        // code here
        vector<int>v(8,0);
        int j=7;
        while(n)
        {
            int x=n%2;
            v[j--]=x;
            n/=2;
        }
        for(int i=0;i<4;i++)
            swap(v[i],v[i+4]);
        int ans=0;
        j=0;
        for(int i=7;i>=0;i--)
            ans += v[i]*pow(2,j++);
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
        Solution ob;
        cout << ob.swapNibbles(n) << endl;
    }
    return 0;
}
// } Driver Code Ends