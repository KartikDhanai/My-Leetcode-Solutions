Given a string s, return the number of palindromic substrings in it.

A string is a palindrome when it reads the same backward as forward.

A substring is a contiguous sequence of characters within the string.

Example 1:

Input: s = "abc"
Output: 3
Explanation: Three palindromic strings: "a", "b", "c".
Example 2:

Input: s = "aaa"
Output: 6
Explanation: Six palindromic strings: "a", "a", "a", "aa", "aa", "aaa".

SOLUTIONS:
class Solution {
public:
    int check(string &s, int i, int j){
        int ans = 0;
        while(i>=0 && j<s.length() && s[i]==s[j]){
            ans++;
            i--;
            j++;
        }
        return ans;
    }

    int countSubstrings(string s) {
        int ans = 0;
        for(int i=0; i<s.length(); i++){
            ans += check(s, i, i);
            ans += check(s, i, i+1);
        }
        return ans;
    }
};
