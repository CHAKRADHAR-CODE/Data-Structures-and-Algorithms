/*
USING C++
>>Hercy wants to save money for his first car. He puts money in the Leetcode bank 
  every day.
  He starts by putting in $1 on Monday, the first day. Every day from Tuesday to Sunday,
  he will put in $1 more than the day before. On every subsequent Monday, he will put
  in $1 more than the previous Monday.
  Given n, return the total amount of money he will have in the Leetcode bank at the
  end of the nth day.

Example 1:
Input: n = 4
Output: 10
Explanation: After the 4th day, the total is 1 + 2 + 3 + 4 = 10.
Example 2:

Constraints:
1 <= n <= 1000
*/
class Solution {
public:
    int totalMoney(int n) {
    int full = n / 7;
    int remaining = n % 7;
    int answer = (full * 28) + (((full - 1) * full) / 2) * 7;
    for (int i = 1; i <= remaining; i++) {
        answer += full + i;
    }
    return answer;
    }
};