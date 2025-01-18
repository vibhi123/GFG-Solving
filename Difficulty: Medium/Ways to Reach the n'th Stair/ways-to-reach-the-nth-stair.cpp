//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // Function to count number of ways to reach the nth stair.
    
    int count(int n, vector<int>&dp)
    {
          if(n==1)
        return 1;

        else if(n==2)
        return 2;
        
        if(dp[n]!=-1)
        return dp[n];
        
        return dp[n]= count(n-1, dp)+ count(n-2,dp);
    }
    int countWays(int n) {
        // your code here
        
        vector<int>dp(n+1,-1);
        
       return  count(n , dp);
        
          
        if(n==1)
        return 1;

        else if(n==2)
        return 2;

        return countWays(n-1)+countWays(n-2);
    }
};


//{ Driver Code Starts.
int main() {
    // taking total testcases
    int t;
    cin >> t;
    while (t--) {
        // taking stair count
        int m;
        cin >> m;
        Solution ob;
        cout << ob.countWays(m) << endl; // Print the output from our pre computed array

        cout << "~"
             << "\n";
    }
    return 0;
}

// } Driver Code Ends