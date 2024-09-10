//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
//     int isCircle(vector<string> &arr) {
//         // code here
//         int n = arr.size();
//         vector<int>&dp()
        
//     }
// };
    void dfs(int start, vector < int > adj[], vector < bool > & visited) {
       visited[start] = true;
       for (auto it: adj[start]) {
         if (visited[it] == false)
           dfs(it, adj, visited);
       }
    }
    bool IsConnected(int s, int V, vector < int > adj[], vector < bool > & mark) {
       vector < bool > visited(26, false);
       dfs(s, adj, visited);
    
       for (int i = 0; i < 26; i++)
         if (visited[i] == false && mark[i] == true)
           return false;
    
       return true;
    }
    int isCircle(vector < string > A) {
       int V = A.size();
       vector < bool > mark(26, false);
       vector < int > adj[26];
       vector < int > indegree(26, 0), outdegree(26, 0);
       for (int i = 0; i < V; i++) {
         string s = A[i];
         int u = s[0] - 'a';
         int v = s[s.size() - 1] - 'a';
         mark[u] =  mark[v] = true;
         indegree[v]++, outdegree[u]++;
         adj[u].push_back(v);
       }
       for (int i = 0; i < 26; i++) {
         if (indegree[i] != outdegree[i]) return false;
       }
       return IsConnected(A[0].front() - 'a', 26, adj, mark);
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        vector<string> A;
        string s;

        for (int i = 0; i < N; i++) {
            cin >> s;
            A.push_back(s);
        }

        Solution ob;
        cout << ob.isCircle(A) << endl;
    }
    return 0;
}
// } Driver Code Ends