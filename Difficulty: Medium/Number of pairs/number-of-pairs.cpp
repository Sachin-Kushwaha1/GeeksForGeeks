//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    #define ll long long
    long long countPairs(vector<int> &arr, vector<int> &brr) {
        // Your Code goes here.
        ll ans  = 0;
        int m = arr.size();
        int n = brr.size();
        vector<long double>a,b;
        for(auto it:arr) a.push_back(((1.0)*it)/log2(it));
        for(auto it:brr) b.push_back(((1.0)*it)/log2(it));
        sort(b.begin(),b.end());
        for(int i=0;i<m;i++){
            auto it=upper_bound(b.begin(),b.end(),a[i]);
            ans += n-(it-b.begin());
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int T;
    cin >> T;
    cin.ignore();
    while (T--) {
        vector<int> ex;
        vector<int> a, b;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int num;
        while (ss >> num)
            ex.push_back(num);
        a = ex;
        getline(cin, input);
        ss.clear();
        ss.str(input);
        int num2;
        while (ss >> num2)
            b.push_back(num2);

        Solution ob;
        cout << ob.countPairs(a, b) << endl;
    }
}
// } Driver Code Ends