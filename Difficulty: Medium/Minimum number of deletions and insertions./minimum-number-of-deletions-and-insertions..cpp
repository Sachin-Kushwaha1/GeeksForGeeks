//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	public:
	
	int dp[1005][1005];
    int fn(string s, string t,int i ,int j){
        if(j==t.size())return s.size()-i;
        if(i==s.size())return t.size()-j;
        if(dp[i][j]!=-1)return dp[i][j];
        int ans=1e9;
        if(s[i]==t[j])ans=min(ans,fn(s,t,i+1,j+1));
        else{
            ans=min(ans,fn(s,t,i+1,j)+1);
            ans=min(ans,fn(s,t,i,j+1)+1);
        }
        return dp[i][j]=ans;
    }
    int minOperations(string str1, string str2) 
    {  
        memset(dp,-1,sizeof(dp));
        return fn(str1,str2,0,0);
    }  
};

//{ Driver Code Starts.
int main() 
{
   	
   
   	int t;
    cin >> t;
    while (t--)
    {
        string s1, s2;
        cin >> s1 >> s2;

	    Solution ob;
	    cout << ob.minOperations(s1, s2) << "\n";
	     
    }
    return 0;
}


// } Driver Code Ends