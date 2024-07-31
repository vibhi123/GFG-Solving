//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:

    string longestCommonPrefix(vector<string> arr) {
        // your code here
        
        int m=10000;
    
        
        for(string s: arr)
        {
            if(s.size()<m)
            m=s.size();
        }
        
        string res="";
        for(int i=0;i<m;i++)
        {   
            char temp = arr[0][i];
            
            for(string s: arr)
            {
                if(temp!=s[i])
                {
                    if(res=="")
                    return "-1";
                    
                    else
                    return res;
                }
            }
            res= res+temp;
        }
        
        return res;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<string> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        string number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        cout << ob.longestCommonPrefix(arr) << endl;
    }
}

// } Driver Code Ends