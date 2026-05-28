/*
 * @lc app=leetcode id=2520 lang=cpp
 *
 * [2520] Count the Digits That Divide a Number
 */

// @lc code=start
#include<iostream>
class Solution {
public:
    int countDigits(int num) {
int count=0;
int copy=num;
while(num>0){
    int digit=num%10;
    num/=10;
    if(digit==0)
    continue;
    
    if(copy%digit==0)
    count++;
}
return count;

        
    }
};
// @lc code=end
