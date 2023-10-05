/*
 * @lc app=leetcode id=779 lang=cpp
 *
 * [779] K-th Symbol in Grammar
 */

// @lc code=start   
class Solution {
public:
    int kthGrammar(int n, int k) {
        if(n==1)return 0;
        if(k%2==0){
            int prevans=kthGrammar(n-1,k/2);
            if(prevans==0)return 1;
            else return 0;
        }
        else{
            return kthGrammar(n-1,k/2+1);
        }
    }
};
// @lc code=end

