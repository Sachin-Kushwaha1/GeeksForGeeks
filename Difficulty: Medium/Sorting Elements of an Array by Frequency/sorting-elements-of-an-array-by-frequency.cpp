//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // Complete this function
    // Function to sort the array according to frequency of elements.
    static bool cmp(pair<int,int> a, pair<int,int>b){
        if(a.second == b.second){
            if(a.first < b.first) return true;
            else false;
        }
        else {
            if(a.second > b.second) return true;
            else false;
        }
        return false;
    }
    vector<int> sortByFreq(vector<int>& arr) {
        // Your code here
        map<int,int>m;
        for(auto it:arr) ++m[it];
        vector<int>ans;
        vector<pair<int,int>>v;
        for(auto it:m) v.push_back({it.first,it.second});
        sort(v.begin(),v.end(),cmp);
        for(auto it:v) {
            while(it.second){
                ans.push_back(it.first);
                --it.second;
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

        string input;
        int num;
        vector<int> arr;

        getline(cin, input);
        stringstream s2(input);
        while (s2 >> num) {
            arr.push_back(num);
        }
        Solution obj;
        vector<int> v;
        v = obj.sortByFreq(arr);
        for (int i : v)
            cout << i << " ";
        cout << endl;
    }

    return 0;
}

// } Driver Code Ends