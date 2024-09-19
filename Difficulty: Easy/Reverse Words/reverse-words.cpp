//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    // Function to reverse words in a given string.
    string reverseWords(string str) {
        // code here
      
        
       string s="";
       
       int l = str.size()-1;
       
     
           string st="";
           
           while(l>=0)
           {  
               if(str[l]=='.')
               {
                  st=st+ str[l]; 
                   s=s+st;
                   st="";
                   l--;
                  
                   
               }
               else{
              st=str[l]+st; 
              l--;
               }
            
           }
           s= s+st;
          
           
        return s;
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution obj;
        cout << obj.reverseWords(s) << endl;
    }
}
// } Driver Code Ends