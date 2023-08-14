//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    vector<int> singleNumber(vector<int> nums) 
    {
        // Code here.
        int n=nums.size();
        long long int x=0;
        for(auto i:nums)
        x=x^i;
        x = x & -x;
        vector<int>res={0,0};
        for(auto it:nums){
            if((it&x)==0)
            res[0]^=it;
            else
            res[1]^=it;
        }
        sort(res.begin(), res.end()); 
    
    return res;
    }
};

//{ Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	int n; 
    	cin >> n;
    	vector<int> v(2 * n + 2);
    	for(int i = 0; i < 2 * n + 2; i++)
    		cin >> v[i];
    	Solution ob;
    	vector<int > ans = ob.singleNumber(v);
    	for(auto i: ans)
    		cout << i << " ";
    	cout << "\n";
    }
	return 0;
}
// } Driver Code Ends