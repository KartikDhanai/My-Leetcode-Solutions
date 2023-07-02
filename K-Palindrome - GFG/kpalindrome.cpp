//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution{
public:
    int isKPalin(string str, string revstr, int m, int n)
    {
        int dp[m + 1][n + 1];
        
        for (int i = 0; i <= m; i++){
            for (int j = 0; j <= n; j++){

                if (i == 0)
                    dp[i][j] = j; 
     
                else if (j == 0)
                    dp[i][j] = i; 
     
                else if (str[i - 1] == revstr[j - 1])
                    dp[i][j] = dp[i - 1][j - 1];
     
                else
                 dp[i][j] = 1 + min(dp[i - 1][j], dp[i][j - 1]); 
            }
        }
     
        return dp[m][n];
    }
    
    int kPalindrome(string str, int n, int k)
    {
        string revstr = str;
        reverse(revstr.begin(), revstr.end());
        if(isKPalin(str, revstr, n, n) <= 2*k)
            return 1;
        return 0;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, k;
        cin>>n>>k;
        string str;
        cin>>str;
        
        Solution ob;
        cout<<ob.kPalindrome(str, n, k)<<endl;
    }
    return 0;
}
// } Driver Code Ends