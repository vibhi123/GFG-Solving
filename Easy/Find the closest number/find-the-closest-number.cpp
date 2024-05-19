//{ Driver Code Starts
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution{
    int ceil(int arr[],int s, int e,int n, int k){
        if(s>=n){
            return -1;
        }
        if(s>e){
            return arr[s];
        }
        int mid = s+(e-s)/2;
        
        if(arr[mid] == k){
            return k;
        }
        else if(arr[mid]>k){
            return ceil(arr,s,mid-1,n,k);
        }
        else{
            return ceil(arr,mid+1,e,n,k);
        }
    }
    int floor(int arr[],int s, int e,int n, int k){
        if(e<0){
            return -1;
        }
        if(s>e){
            return arr[e];
        }
        int m = s+(e-s)/2;
        
        if(arr[m] == k){
            return k;
        }
        else if(arr[m]>k){
            return floor(arr,s,m-1,n,k);
        }
        else{
            return floor(arr,m+1,e,n,k);
        }
    }
    public:
    int findClosest( int n, int k,int arr[]) 
    { 
        // Complete the function
        int upper_bound = ceil(arr,0,n-1,n,k);
        int lower_bound = floor(arr,0,n-1,n,k);
      //  cout<<upper_bound<<" "<<lower_bound;
        if(lower_bound != -1 && upper_bound != -1){
            return abs(lower_bound-k)<abs(upper_bound-k)? lower_bound:upper_bound;
        }
        else {
            return lower_bound == -1? upper_bound: lower_bound;
        }
    }
};

//{ Driver Code Starts.
int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int arr[n];
        for (int i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        Solution ob;
        cout<<ob.findClosest(n,k,arr)<<endl;
    }
}

// } Driver Code Ends