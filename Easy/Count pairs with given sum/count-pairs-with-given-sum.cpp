//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{   
public:
    int getPairsCount(int arr[], int n, int k) {
        int count=0;
        int max=arr[0];
        for(int i=1; i<n; i++){
            if(arr[i]>max) max=arr[i];
        }
        int frequency[max+1]={0};
        for(int i=0; i<n; i++){
            frequency[arr[i]]++;
        }
        for(int i=0; i<=min(k/2,max); i++){
            if(frequency[i]!=0 && k-i<=max && frequency[k-i]!=0){
                if(i==k-i){
                    count=count+((frequency[i])*(frequency[i]-1))/2;
                }
                else{
                    count=count+(frequency[i]*frequency[k-i]);
                }
            }
        }
        return count;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.getPairsCount(arr, n, k);
        cout << ans << "\n";
    }
    
    return 0;
}
// } Driver Code Ends