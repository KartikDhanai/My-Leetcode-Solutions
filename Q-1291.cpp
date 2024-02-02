1291. Sequential Digits
An integer has sequential digits if and only if each digit in the number is one more than the previous digit.
Return a sorted list of all the integers in the range [low, high] inclusive that have sequential digits.

Example 1:
Input: low = 100, high = 300
Output: [123,234]
Example 2:

Input: low = 1000, high = 13000
Output: [1234,2345,3456,4567,5678,6789,12345]
 
Constraints:
10 <= low <= high <= 10^9

SOLUTION : (C++)
class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        vector<int> ans;
        for(int i=1;i<=9;i++){
            int number= i;
            int nextdigit = i+1;
            while(number<=high and nextdigit <=9){
                number = number*10 + nextdigit;
                if(low <= number and number <= high)
                    ans.push_back(number);
                    nextdigit++;
            }
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};
