/*
 * @Author: your name
 * @Date: 2022-01-16 17:18:25
 * @LastEditTime: 2022-01-16 17:30:42
 * @LastEditors: Please set LastEditors
 * @Description: 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 * @FilePath: \vscode_leetcode\231.power-of-two.cpp
 */
// @before-stub-for-debug-begin
#include <vector>
#include <string>
#include "commoncppproblem231.h"

using namespace std;
// @before-stub-for-debug-end

/*
 * @lc app=leetcode.cn id=231 lang=cpp
 *
 * [231] Power of Two
 */

// @lc code=start
class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n <= 0)
            return false;
        return (n & (n-1)) == 0;
    }
};
// @lc code=end

