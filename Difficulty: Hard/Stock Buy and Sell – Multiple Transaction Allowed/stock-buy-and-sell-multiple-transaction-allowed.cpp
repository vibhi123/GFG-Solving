//{ Driver Code Starts
// Initial template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
     int maximumProfit(vector<int> &arr) {
        int i=0;
        int n=arr.size();
        if(n==1) return 0;
        int ans=0;
        while(i<n-1)
        { 
         int val= arr[i];
         while(i<n-1 && arr[i]<arr[i+1]){
             i++;
        }
         ans += (arr[i]-val);
         i++;
        }   
        return ans;    
    }
};


//{ Driver Code Starts.
int main() {
    int t;

    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        int n = arr.size();
        Solution ob;
        int res = ob.maximumProfit(arr);
        cout << res;

        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends