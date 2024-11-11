//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int minIncrements(vector<int>& arr) {
        // Code here
        
        sort(arr.begin(), arr.end());
        
        int cnt =0;
        int max = arr[0] + 1;
        for( int i = 1 ; i < arr.size();i++)
        {
           if ( arr[i]>= max )
           {
               max = arr[i] + 1;
            }
            else
            {
                cnt = cnt + max - arr[i] ;
                max = arr[i] + ( max - arr[i] ) + 1;
            }
        }
        
        return cnt ;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> a;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            a.push_back(number);
        }

        Solution ob;
        int ans = ob.minIncrements(a);
        cout << ans << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends