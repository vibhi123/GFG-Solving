//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
public:
    /* Returns count of pairs with difference k */
    int countPairsWithDiffK(vector<int>& arr, int k) {
        // code here
        int ans=0;
        unordered_map<int,int>mp;
        for(int i=0;i<arr.size();i++){
            int rem1 = arr[i] - k;
            int rem2 = arr[i] + k;
            if(mp.find(rem1) != mp.end()){
                ans += mp[rem1];
            }
            if(mp.find(rem2) != mp.end()){
                ans += mp[rem2];
            }
            mp[arr[i]]++;
        }
        return ans;
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
        string ks;
        getline(cin, ks);
        int k = stoi(ks);
        Solution ob;
        auto ans = ob.countPairsWithDiffK(arr, k);
        cout << ans << "\n";
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends