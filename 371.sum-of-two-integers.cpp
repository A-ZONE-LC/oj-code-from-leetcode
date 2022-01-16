/*
 * @Author: your name
 * @Date: 2022-01-16 18:07:21
 * @LastEditTime: 2022-01-16 18:19:13
 * @LastEditors: Please set LastEditors
 * @Description: 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 * @FilePath: \vscode_leetcode\371.sum-of-two-integers.cpp
 */
/*
 * @lc app=leetcode.cn id=371 lang=cpp
 *
 * [371] Sum of Two Integers
 */

// @lc code=start
class Solution {
public:
    int getSum(int a, int b) {
        //?两数之和可以看作不带进位的加法+进位
        //?不带进位的加法对应着a^b
        //?进位可以用 (a&b)<<1 表示
        if(b == 0)
            return a;
        return getSum(a^b, (unsigned int)(a&b)<<1);
    }
};
// @lc code=end

