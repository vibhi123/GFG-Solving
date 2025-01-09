//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // Function to count the number of possible triangles.
    int countTriangles(vector<int>& arr) {
        // code here
        int count = 0;
        
        sort(arr.begin(),arr.end());
        
        for(int  i = arr.size()-1 ; i >=2 ;i--)
        {   
            int k = i-1;
           int  j=0;
            
            while(j<k){
               
                    if(arr[k]+arr[j]>arr[i] )
                    {
                        count = count + k-j;
                        k--;
                    }else
                    j++;
            }
        }
        return count ;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // To ignore the newline after the integer input
    while (t--) {
        int n;
        vector<int> a;
        string input;

        // Input format: first number n followed by the array elements
        getline(cin, input);
        stringstream ss(input);
        int num;
        while (ss >> num)
            a.push_back(num);

        Solution obj;
        cout << obj.countTriangles(a) << "\n~\n";
    }

    return 0;
}

// } Driver Code Ends