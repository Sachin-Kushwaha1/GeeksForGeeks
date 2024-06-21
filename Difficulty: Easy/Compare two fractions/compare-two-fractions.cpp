//{ Driver Code Starts

#include <iostream>
#include <regex>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    string compareFrac(string str) {

        // Code here
        double f=0;
        int i=0,j=0;
        vector<double>v;
        v.push_back(0);
        for(auto it:str)
        {
            if(it == '/' || it == ',') {
                ++f;
                if(it==',') j=i; 
                v.push_back(0);
            }
            if( it>='0' && it<='9')
                v[f] = 10*v[f] + it-'0';
            ++i;
        }
        if(v[0]/v[1] == v[2]/v[3]) return "equal";
        else if (v[0]/v[1] > v[2]/v[3]) return str.substr(0,j);
        return str.substr(j+2);
    }
};


//{ Driver Code Starts.

int main() {
    Solution ob;
    int t;
    cin >> t;
    cin.ignore();
    for (int i = 0; i < t; i++) {

        string str;
        getline(cin, str);

        cout << ob.compareFrac(str) << endl;
    }
    return 0;
}

// } Driver Code Ends