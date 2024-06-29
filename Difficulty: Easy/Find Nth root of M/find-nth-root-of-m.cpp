//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	public:
	int NthRoot(int n, int m)
	{
	    // Code here.
	    
	    for(int i=1;i<=m;i++)
	    {   
	        int mul=1;
	        for(int j=1;j<=n;j++)
	        {
	            
	            mul =mul * i;
	            
	           
	            
	            
	        }
	        
	         if(mul==m)
	            return i;
	            
	            if(mul> m)
	            return -1;
	        
	        
	    }
	    
	}  
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		Solution ob;
		int ans = ob.NthRoot(n, m);
		cout << ans << "\n";
	}  
	return 0;
}
// } Driver Code Ends