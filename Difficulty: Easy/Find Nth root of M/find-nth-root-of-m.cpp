//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	public:
	#define ll long long int
	int NthRoot(int n, int m)
	{
	    // Code here.
	   // if(n==1) return m;
	   // ll i = 1, j = m/n;
    //     ll mid = (i+j)/n;
    //     while(i<=j){
    //         mid = (i+j)/n;
    //         ll x = pow(mid,n);
    //         if( x == m) return mid;
    //         if(x>m) j = mid-1;
    //         else i = mid+1;
    //     }
    //     return -1;
        int s =1;
        int e =m;
        int ans =-1;
        
        while(s<=e){
            
             int mid = s+(e-s)/2;
             
             if(pow(mid,n) == m){
                 ans =mid;
                 s=mid+1;
                 return ans;
             }else if(pow(mid,n) > m){
                 e=mid-1;
             }
             else{
                  s=mid+1;
             }
             
        }
        
        return ans;
	}  
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		Solution ob;
		int ans = ob.NthRoot(n, m);
		cout << ans << "\n";
	}  
	return 0;
}
// } Driver Code Ends