//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
  
  int findMaxSquareWithAllOnes(std::vector<std::vector<int>>& mat, int i, int j, std::vector<std::vector<int>>& memo) {
    // Base case: out of bounds or cell contains 0
    if (i < 0 || j < 0 || mat[i][j] == 0) {
        return 0;
    }

    // If the value is already computed, return it
    if (memo[i][j] != -1) {
        return memo[i][j];
    }

    // Recursive case
    int left = findMaxSquareWithAllOnes(mat, i, j - 1, memo);
    int up = findMaxSquareWithAllOnes(mat, i - 1, j, memo);
    int diagonal = findMaxSquareWithAllOnes(mat, i - 1, j - 1, memo);

    memo[i][j] = std::min({left, up, diagonal}) + 1;
    return memo[i][j];
}


    int maxSquare(int n, int m, vector<vector<int>> mat) {
        // code here
        
        std::vector<std::vector<int>> memo(n, std::vector<int>(m, -1));

    int maxSize = 0;

    // Compute the maximum size of square sub-matrix for each cell
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (mat[i][j] == 1) {
                maxSize = std::max(maxSize, findMaxSquareWithAllOnes(mat, i, j, memo));
            }
        }
    }

    return maxSize;
        
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> mat(n, vector<int>(m, 0));
        for (int i = 0; i < n * m; i++)
            cin >> mat[i / m][i % m];

        Solution ob;
        cout << ob.maxSquare(n, m, mat) << "\n";
    }
    return 0;
}
// } Driver Code Ends