//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    string binaryNextNumber(string s) {
        // code here.
        string ans;
        int count=0,n=s.length();
        
        for(int i=n-1;i>=0;i--)
        {
            if(s[i]=='1') count++;
            else
            break;
        }
        
        bool check=false;
        for(int i=0;i<n-count-1;i++)
        {
            
          if(s[i]=='1')check=true;
          
            if(check) ans+=s[i];
        }
        
        ans+='1';
        for(int i=0;i<count;i++)
        ans+='0';
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution ob;
        cout << ob.binaryNextNumber(s);
        cout << "\n";
    }

    return 0;
}
// } Driver Code Ends