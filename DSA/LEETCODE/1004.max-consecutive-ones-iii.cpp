
class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n=nums.size();
        int flips=0,i=0,j=0;
        int maxLen=INT_MIN,len=INT_MIN;
        while(j<n){
            if(flips<k){
                flips++;
                j++;
            }
            else{
                len=j-i;
                maxLen=max(maxLen,len);
                while(nums[i]==1)i++;
                i++;
                j++;
            }
        }
        len = j - i;
        maxLen = max(maxLen, len);
        return maxLen;
    }
};
// @lc code=end

