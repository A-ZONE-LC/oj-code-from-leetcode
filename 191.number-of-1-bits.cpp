/*
 * @Author: your name
 * @Date: 2022-01-16 17:34:52
 * @LastEditTime: 2022-01-16 17:40:20
 * @LastEditors: Please set LastEditors
 * @Description: 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 * @FilePath: \vscode_leetcode\191.number-of-1-bits.cpp
 */
/*
 * @lc app=leetcode.cn id=191 lang=cpp
 *
 * [191] Number of 1 Bits
 */

// @lc code=start
class Solution {
public:
    int hammingWeight(uint32_t n) {
        int ret = 0;
        while(n)
        {
            n &= (n-1);
            ret++;
        }
        return ret;
    }
};
// @lc code=end

