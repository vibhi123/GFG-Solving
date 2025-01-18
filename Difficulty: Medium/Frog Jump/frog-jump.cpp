//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
  int cal(vector<int>&h, vector<int>&dp,int n )
  {
      if( n==0)
      return 0;
      
      if( dp[n]!=-1)
      return dp[n];
      
     else if(n>1)
       return dp[n]=min(( cal(h,dp,n-1)+ abs(h[n]-h[n-1])),(cal(h,dp,n-2)+ abs(h[n]-h[n-2])));
       else
       return dp[n]=cal(h,dp,n-1)+ abs(h[n]-h[n-1]);
  }
    int minCost(vector<int>& height) {
        // Code here
        
        
        int n = height.size()-1;
        vector<int> dp(n+1,-1);
        
        return cal(height,dp, n);
    }
};

//{ Driver Code Starts.

int main() {
    string str;
    getline(cin, str);
    int t = stoi(str);
    while (t--) {
        getline(cin, str);
        stringstream ss(str);
        vector<int> arr;
        int num;
        while (ss >> num) {
            arr.push_back(num);
        }
        Solution ob;
        cout << ob.minCost(arr) << endl;
        cout << "~" << endl;
    }

    return 0;
}

// } Driver Code Ends