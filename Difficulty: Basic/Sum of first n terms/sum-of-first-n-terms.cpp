//{ Driver Code Starts
// Initial template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

int sum=0;
class Solution {
  public:
    int sumOfSeries(int n) {
        // code here
    
        if(n<=0)
        return 0;
     
        int s = sumOfSeries(n -1 );
        s= s+ (n*n*n);
        
        return s;
        
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        Solution ob;
        cout << ob.sumOfSeries(N) << "\n";

        cout << "~"
             << "\n";
    }
}
// } Driver Code Ends