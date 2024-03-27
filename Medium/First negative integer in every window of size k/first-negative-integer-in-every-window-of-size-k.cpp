//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

vector<long long> printFirstNegativeInteger(long long int arr[],
                                             long long int n, long long int k);

// Driver program to test above functions
int main() {
    long long int t, i;
    cin >> t;
    while (t--) {
        long long int n;
        cin >> n;
        long long int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        long long int k;
        cin >> k;

        vector<long long> ans = printFirstNegativeInteger(arr, n, k);
        for (auto it : ans) cout << it << " ";
        cout << endl;
    }
    return 0;
}

// } Driver Code Ends
vector<long long> printFirstNegativeInteger(long long int A[], long long int N, long long int K){

     vector<long long >ans;
     vector<long long >temp;
     
        long long j=0,ind=0;
        
        for(long long  i=0;i<N ;i++)
        {   
            
           
            if(A[i]<0)
            {
                temp.push_back(A[i]);
            }
            
            if(i-j+1>K)
            { 
                if(A[j]<0)
               ind++;
                j++;
                
            }
            if(i-j+1==K)
            {   
                 //cout<<"hello"<<endl;
                if(ind==temp.size())
                ans.push_back(0);
                else
                ans.push_back(temp[ind]);
            }
            
        }
        return ans ;
 }