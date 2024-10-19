//{ Driver Code Starts
#include <iostream>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    string roundToNearest(string str) {
        // Complete the function
      int n = str.size();
      if(str[n-1]<='5')
      {
          str[n-1]='0';
          return str;
       }
       else
       {  
          str[n-1]='0';
          
          for(int i=n-2;i>=0;)
           {
               if(str[i]=='9')
               {
                  str[i]='0';
                  i--;
               }
               else
               {
                 // cout<<str[i]<<endl;
                  int t= int(str[i]);
                  
                   str[i]=char(t+1);
                   return str;
               }
           }
           if(str[0]=='0')
           {
              // str[0]='0';
               str= "1" + str;
           }
       }
       return str;
    }
};

//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        string str;
        cin >> str;
        Solution ob;
        cout << ob.roundToNearest(str) << endl;
    }

    return 0;
}
// } Driver Code Ends