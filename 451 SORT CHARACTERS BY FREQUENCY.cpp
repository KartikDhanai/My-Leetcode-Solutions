PROBLEM : SORT CHARACTERS BY FREQUENCY
Given a string s, sort it in decreasing order based on the frequency of the characters. The frequency of a character is the number of times it appears in the string.

Return the sorted string. If there are multiple answers, return any of them.

Example 1:
Input: s = "tree"
Output: "eert"
Explanation: 'e' appears twice while 'r' and 't' both appear once.
So 'e' must appear before both 'r' and 't'. Therefore "eetr" is also a valid answer.

Example 2:
Input: s = "cccaaa"
Output: "aaaccc"
Explanation: Both 'c' and 'a' appear three times, so both "cccaaa" and "aaaccc" are valid answers.
Note that "cacaca" is incorrect, as the same characters must be together.

Example 3:
Input: s = "Aabb"
Output: "bbAa"
Explanation: "bbaA" is also a valid answer, but "Aabb" is incorrect.
Note that 'A' and 'a' are treated as two different characters.
 
Constraints:
1 <= s.length <= 5 * 105
s consists of uppercase and lowercase English letters and digits.

SOLUTION :
class Solution {
public:
typedef pair<char,int> p;
    string frequencySort(string s) {
      vector<p> arr(128);
      for(char &ch : s){
          int freq = arr[ch].second;
          arr[ch] = {ch, freq+1};
      }

    auto cmp = [&](p &a, p &b){
        return a.second > b.second;
            };

    sort(begin(arr), end(arr), cmp);
    string ans= "";
    for(int i=0;i<128;i++){
        if(arr[i].second>0){
        char ch = arr[i].first;
        int fr = arr[i].second;
        string temp = string(fr, ch);
        ans += temp;
        }     
    }
    return ans;
    }
};
