/*
 * @lc app=leetcode id=59 lang=cpp
 *
 * [59] Spiral Matrix II
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>>arr(n,vector<int>(n));
        int minr=0;
        int maxr=n-1;
        int minc=0;
        int maxc=n-1;
        int cnt=1;
        while(minr<=maxr && minc<=maxc){
            for(int j=minc;j<=maxc;j++){
                arr[minr][j]=cnt++;
            }minr++;
            if (minr > maxr || minc > maxc)
                break;
            for (int i = minr; i <= maxr; i++)
            {
                arr[i][maxc] = cnt++;
            }
            maxc--;
            if (minr > maxr || minc > maxc)
                break;
            for (int j = maxc; j>=minc; j--)
            {
                arr[maxr][j] = cnt++;
            }
            maxr--;
            if (minr > maxr || minc > maxc)
                break;
            for (int i=maxr;i>=minr;i--)
            {
                arr[i][minc] = cnt++;
            }
            minc++;
            if(minr>maxr||minc>maxc)break;
        }return arr;
    }
};
// @lc code=end

