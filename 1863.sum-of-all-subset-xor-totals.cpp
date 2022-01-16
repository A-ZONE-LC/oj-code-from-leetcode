/*
 * @Author: your name
 * @Date: 2022-01-16 17:55:04
 * @LastEditTime: 2022-01-16 18:05:42
 * @LastEditors: your name
 * @Description: 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 * @FilePath: \vscode_leetcode\1863.sum-of-all-subset-xor-totals.cpp
 */
/*
 * @lc app=leetcode.cn id=1863 lang=cpp
 *
 * [1863] Sum of All Subset XOR Totals
 */

// @lc code=start
class Solution {
public:
    int subsetXORSum(vector<int>& nums) {
        int ans, sum = 0;
        for(int i = 0; i < (1 << nums.size()); i++)
        {
            ans = 0;
            for(int j=0 ;j < nums.size(); j++)
            {
                if(i & (1 << j))
                ans ^= nums[j];
            }
            sum += ans;
        }
        return sum;
    }
};
// @lc code=end

