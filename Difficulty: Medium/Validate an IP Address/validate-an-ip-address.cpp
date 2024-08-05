//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
/* The function returns 1 if
IP string is valid else return 0
You are required to complete this method */
class Solution {
  public:
    int isValid(string str) {
        // code here
        int c=0;
        int n=0;
        int dot=0;
        for(int i=0;i<str.size();i++)
        {
            if(str[i]=='.')
            {
                ++dot;
                if(c==0 || c>3 || n>255 || n<0 || dot>3) return false;
                else {
                    c=0;
                    n=0;
                }
            }
            else {
                ++c;
                n = n*10 + str[i]-'0';
            }
        }
        if(c>3 || n>255 || n<0) return false;
        return true;
    }
};

//{ Driver Code Starts.

int main() {
    // your code goes here
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        // if (s.size() == 3) {
        //     cout << "false" << endl;
        //     return 0;
        // }
        Solution ob;
        bool f = ob.isValid(s);
        if (f)
            cout << "true" << endl;
        else
            cout << "false" << endl;
    }
    return 0;
}
// } Driver Code Ends