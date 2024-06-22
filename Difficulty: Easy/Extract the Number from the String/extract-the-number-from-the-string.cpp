//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    long long ExtractNumber(string s) {
        // code here
        long long int ans=-1;
        long long n=0;
        int f=0;
        for(int i=0;i<s.size();i++)
        {
            long long n=0;
            if(s[i]>='0' && s[i]<='9')
            {
                while(s[i]>='0' && s[i]<='9')
                {
                    n = n*10 + s[i]-'0';
                    ++i;
                }
                long long x=n;
                while(n)
                {
                    if( n%10 == 9 ) {
                        n=-1;
                        break;
                    }
                    n/=10;
                }
                if(n!=-1) ans = max(ans,x);
            }
        }
        // if(ans) 
        return ans;
        // return -1;
    }
};

//{ Driver Code Starts.
int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    string tc;
    getline(cin, tc);
    t = stoi(tc);
    while (t--) {
        string s;
        getline(cin, s);

        Solution ob;
        cout << ob.ExtractNumber(s) << "\n";
    }

    return 0;
}

// } Driver Code Ends