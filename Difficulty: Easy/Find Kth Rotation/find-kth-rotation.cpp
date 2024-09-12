//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:
    int findKRotation(vector<int> &nums) {
        // Code Here
        int n = nums.size();
        int i = 0, j  = n-1, mid;       
        while(i<j){
            mid = i + (j-i)/2;
            if(nums[mid]>=nums[0]) i=mid+1;
            else j = mid;
        }
        if(nums[0]<nums[i]) return 0;
        return i;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input1;
        getline(cin, input1);
        stringstream ss1(input1);
        int number1;
        while (ss1 >> number1) {
            arr.push_back(number1);
        }
        Solution ob;
        int res = ob.findKRotation(arr);
        cout << res << endl;
    }
}
// } Driver Code Ends