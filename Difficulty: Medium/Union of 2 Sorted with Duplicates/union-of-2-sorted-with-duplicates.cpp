//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // Function to return a list containing the union of the two arrays.
    vector<int> findUnion(vector<int> &a, vector<int> &b) {
        vector<int> ans;
        int i = 0, j = 0;

        while (i < a.size() && j < b.size()) {
            // Skip duplicates in both arrays
            while (i + 1 < a.size() && a[i] == a[i + 1]) i++;
            while (j + 1 < b.size() && b[j] == b[j + 1]) j++;

            if (a[i] == b[j]) {
                ans.push_back(a[i]);
                i++;
                j++;
            } else if (a[i] < b[j]) {
                ans.push_back(a[i]);
                i++;
            } else {
                ans.push_back(b[j]);
                j++;
            }
        }

        // Add remaining elements from array `a`
        while (i < a.size()) {
            while (i + 1 < a.size() && a[i] == a[i + 1]) i++;
            ans.push_back(a[i]);
            i++;
        }

        // Add remaining elements from array `b`
        while (j < b.size()) {
            while (j + 1 < b.size() && b[j] == b[j + 1]) j++;
            ans.push_back(b[j]);
            j++;
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
        vector<int> a, b;
        string input;

        // Read first array
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            a.push_back(number);
        }

        // Read second array
        getline(cin, input);
        stringstream ss2(input);
        while (ss2 >> number) {
            b.push_back(number);
        }

        Solution ob;
        vector<int> ans = ob.findUnion(a, b);
        for (int i : ans)
            cout << i << ' ';
        cout << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends