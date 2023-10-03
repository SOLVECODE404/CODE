/*
 * @lc app=leetcode id=633 lang=cpp
 *
 * [633] Sum of Square Numbers
 */

// @lc code=start
class Solution
{
public:
    bool isperfectsquare(int n)
    {
        int root = sqrt(n);
        if (root * root == n)return true;
        else return false;
    }
    bool judgeSquareSum(int c)
    {
        int x = 0;
        int y = c;
        while (x <= y)
        {
            if (isperfectsquare(x) && isperfectsquare(y))
                return true;
            else if (!isperfectsquare(y))
            {
                y = (int)sqrt(y) * (int)sqrt(y);
                x = c - y;
            }
            else
            {
                x = ((int)sqrt(x) + 1 )* ((int)sqrt(x) + 1);
                y = c - x;
            }
            }
        return false;
    }
};
// @lc code=end
