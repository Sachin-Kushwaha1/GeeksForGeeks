//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:

    void matchPairs(int n, char nuts[], char bolts[]) 
    {
        // code here
        unordered_map<char,int>mp1;
        
        for(int i=0;i<n;i++)
        {
            ++mp1[nuts[i]];
        }
        
        unordered_map<char,int>mp2;
        
        for(int i=0;i<n;i++)
        {
            ++mp2[bolts[i]];
        }
        
        
        vector<char>vec;
        vec.push_back('!');
        vec.push_back('#');
        vec.push_back('$');
        vec.push_back('%');
        vec.push_back('&');
        vec.push_back('*');
        vec.push_back('?');
        vec.push_back('@');
        vec.push_back('^');
        
        int np=vec.size();
        
        int a=0;
        int b=0;
        for(int i=0;i<np;i++)
        {
            if(mp1[vec[i]]!=0 && a<n)
            {
                nuts[a]=vec[i];
                a++;
            }
            
            if(mp2[vec[i]]!=0 && b<n)
            {
                bolts[b]=vec[i];
                b++;
            }
        }
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        char nuts[n], bolts[n];
        for (int i = 0; i < n; i++) {
            cin >> nuts[i];
        }
        for (int i = 0; i < n; i++) {
            cin >> bolts[i];
        }
        Solution ob;
        ob.matchPairs(n, nuts, bolts);
        for (int i = 0; i < n; i++) {
            cout << nuts[i] << " ";
        }
        cout << "\n";
        for (int i = 0; i < n; i++) {
            cout << bolts[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends