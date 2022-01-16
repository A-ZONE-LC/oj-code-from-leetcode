/*
 * @Author: your name
 * @Date: 2022-01-16 17:46:43
 * @LastEditTime: 2022-01-16 17:47:48
 * @LastEditors: your name
 * @Description: 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 * @FilePath: \vscode_leetcode\136.single-number.cpp
 */
/*
 * @lc app=leetcode.cn id=136 lang=cpp
 *
 * [136] Single Number
 */

// @lc code=start
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n = 0;
        for(auto& e: nums)
        {
            n ^= e;
        }
        return n;
    }
};
// @lc code=end

