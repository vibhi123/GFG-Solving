//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int countPairs(vector<int> &arr, int target) {
        // Code here
        unordered_map<int,int>mp;
        int  cnt=0;
        for(int i=0;i<arr.size();i++){
            if(mp.find(target-arr[i])!=mp.end()){
                cnt=cnt+mp[target-arr[i]];
            }
            mp[arr[i]]++;
        }
        
        return cnt;
    }
        
        // int  i =0 , j = arr.size()-1;
        
        // while( i < j )
        // {
        //     if( arr[i]+ arr[j]== target )
        //     {   
        //      count++;
        //      if(arr[i]==arr[i+1])
        //      i++;
        //      else if(arr[j]==arr[j-1])
        //      j--;
             
        //      else
        //      i++,j--;
        //     }
            
        //     else if( arr[i]+ arr[j] > target )
        //     j--;
        //     else
        //     i++;
            
            
        // }
     
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
        int target;
        cin >> target;
        cin.ignore();
        Solution ob;
        int res = ob.countPairs(arr, target);

        cout << res << endl << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends