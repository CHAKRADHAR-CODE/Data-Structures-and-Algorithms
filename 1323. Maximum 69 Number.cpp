/*
USING C++
>>You are given a positive integer num consisting only of digits 6 and 9.
  Return the maximum number you can get by changing at most one digit 
  (6 becomes 9, and 9 becomes 6).

Example 1:
Input: num = 9669
Output: 9969
Explanation: 
Changing the first digit results in 6669.
Changing the second digit results in 9969.
Changing the third digit results in 9699.
Changing the fourth digit results in 9666.
The maximum number is 9969.

Constraints:
1 <= num <= 104
num consists of only 6 and 9 digits.
*/
class Solution {
public:
    int maximum69Number (int num) 
    {
        int rightDigCount = -1; 
        int digCount = 0; 
        int temp = num; 
    
        while(temp > 0) 
        {
            int dig = temp % 10;
            if (dig == 6) rightDigCount = digCount;
            
            digCount++;
            temp = temp / 10;
        }
        if (rightDigCount == -1) return num;
        int ans = num + (3 * pow(10, rightDigCount));
        return ans;
    }
};