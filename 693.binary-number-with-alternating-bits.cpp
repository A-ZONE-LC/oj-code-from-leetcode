/*
 * @Author: your name
 * @Date: 2022-01-16 17:50:19
 * @LastEditTime: 2022-01-16 17:54:36
 * @LastEditors: your name
 * @Description: 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 * @FilePath: \vscode_leetcode\693.binary-number-with-alternating-bits.cpp
 */
/*
 * @lc app=leetcode.cn id=693 lang=cpp
 *
 * [693] Binary Number with Alternating Bits
 */

// @lc code=start
class Solution {
public:
    bool hasAlternatingBits(int n) {
        while(n)
        {
            if((n & 3) == 0 || (n & 3) == 3)
                return false;
            n >>= 1;
        }
        return true;
    }
};
// @lc code=end

