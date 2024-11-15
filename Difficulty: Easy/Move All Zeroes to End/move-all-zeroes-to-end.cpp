//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:
    void pushZerosToEnd(vector<int>& arr) {
        // code here
        int slow = 0 ;
         
         int n = arr.size();
         
         while( slow < n)
         {
             if( arr[slow]==0)
             break;
             
             slow++;
         }
         int high= slow+1;
         
         while( high < n)
         {
             if( arr[high]!=0)
             break;
             
             high++;
         }
         
         while( high< n)
         {
             if(arr[slow]==0 && arr[high]!=0)
             {
                 swap(arr[slow], arr[high]);
                 high++, slow++;
             }
             if ( arr[slow]!=0)
             slow++;
             
             if( arr[high]==0)
             high++;
         }
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
        Solution ob;
        int n = arr.size();
        ob.pushZerosToEnd(arr);
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends