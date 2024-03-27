//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution{   
public:
    long maximumSumSubarray(int K, vector<int> &Arr , int N){
        // code here 
        long sum=0;

            for(int i=0;i<K;i++)
            {
                sum=sum+Arr[i];
            }
            long final_sum=sum;
            int temp=0;
            //cout<<sum<<endl;
            for(int j=K;j<N;j++)
            {
                if(j-K>=0)
                temp=j-K;
                sum=sum+Arr[j]-Arr[temp];
                if(sum>final_sum)
                final_sum=sum;
            }
            return final_sum;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N,K;
        cin >> N >> K;;
        vector<int>Arr;
        for(int i=0;i<N;++i){
            int x;
            cin>>x;
            Arr.push_back(x);
        }
        Solution ob;
        cout << ob.maximumSumSubarray(K,Arr,N) << endl;
    }
    return 0; 
} 
// } Driver Code Ends