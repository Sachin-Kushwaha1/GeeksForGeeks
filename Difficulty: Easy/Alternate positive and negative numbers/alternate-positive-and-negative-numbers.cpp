//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:

    void rearrange(vector<int> &arr) {
        // code here
        vector<int> p,n;
        for(auto it:arr) if(it>=0) p.push_back(it);
            else n.push_back(it);
        
        int ip=0,in=0;
        
        for(int i=0;i<arr.size();i++){
            if(i%2 && in<n.size()) arr[i] = n[in++];
            else if(i%2==0 && ip<p.size()) arr[i] = p[ip++];
            else {
                if(ip<p.size()) arr[i] = p[ip++];
                else arr[i] = n[in++];
            }
        }
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        int num;

        getline(cin, input);
        stringstream s2(input);
        while (s2 >> num) {
            arr.push_back(num);
        }
        Solution ob;
        ob.rearrange(arr);
        for (int i = 0; i < arr.size(); i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends