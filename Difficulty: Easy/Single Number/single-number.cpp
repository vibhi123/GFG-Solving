//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:
    int getSingle(vector<int>& arr) {
        // code here
        
        sort( arr.begin(), arr.end());
        
        for(int i=0 ;i<arr.size();)
        {
            int count =1;
            
            while(i+1<arr.size() && arr[i]==arr[i+1] )
            {
               count++;
               i++;
            }
           // cout<<arr[i]<<"= "<<count<<endl;
            if(count%2!=0)
            return arr[i];
            i++;
        }
        return -1;
    }
};

//{ Driver Code Starts.

int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);
    while (t--) {

        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution obj;
        int res = obj.getSingle(arr);
        cout << res << endl;
    }
    return 0;
}
// } Driver Code Ends