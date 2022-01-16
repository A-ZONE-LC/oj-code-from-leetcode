/*
 * @Author: your name
 * @Date: 2022-01-16 17:32:40
 * @LastEditTime: 2022-01-16 17:33:50
 * @LastEditors: your name
 * @Description: 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 * @FilePath: \vscode_leetcode\342.power-of-four.cpp
 */
/*
 * @lc app=leetcode.cn id=342 lang=cpp
 *
 * [342] Power of Four
 */

// @lc code=start
class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n <=0 )
            return false;
        return (n & (n-1)) == 0 && n%3 == 1;
    }
};
// @lc code=end

