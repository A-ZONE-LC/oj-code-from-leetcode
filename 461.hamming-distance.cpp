/*
 * @Author: your name
 * @Date: 2022-01-16 17:48:06
 * @LastEditTime: 2022-01-16 17:49:55
 * @LastEditors: your name
 * @Description: 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 * @FilePath: \vscode_leetcode\461.hamming-distance.cpp
 */
/*
 * @lc app=leetcode.cn id=461 lang=cpp
 *
 * [461] Hamming Distance
 */

// @lc code=start
class Solution {
public:
    int hammingDistance(int x, int y) {
        int n = x ^ y;
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

