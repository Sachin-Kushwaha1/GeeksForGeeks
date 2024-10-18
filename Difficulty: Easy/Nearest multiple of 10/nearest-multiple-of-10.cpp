//{ Driver Code Starts
#include <iostream>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    string roundToNearest(string str) {
        // Complete the function
        int n = str.size();
        int carry = 4;
        for(int i=n-1;i>=0;i--)
        {
            int sum = int(str[i]-'0')+carry;
            str[i] = char((sum%10) + '0');
            carry = sum/10;
            if(carry == 0)
                break;
        }
        str[n-1] = '0';
        return str;
    }
};

//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        string str;
        cin >> str;
        Solution ob;
        cout << ob.roundToNearest(str) << endl;
    }

    return 0;
}
// } Driver Code Ends