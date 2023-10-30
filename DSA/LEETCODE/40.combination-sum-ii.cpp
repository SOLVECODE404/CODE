/*
 * @lc app=leetcode id=40 lang=cpp
 *
 * [40] Combination Sum II
 */

// @lc code=start
class Solution {
public:

    void go(vector<vector<int>>&ans,vector<int>&a,vector<int>&v,int tgt,int idx){
        if(tgt==0){
            ans.push_back(v);
            return;
        }
        for(int i=idx;i<a.size();i++){
            if(i!=idx and a[i]==a[i-1])continue;
            if(tgt>=a[i]){
                v.push_back(a[i]);
                go(ans,a,v,tgt-a[i],i+1);
                v.pop_back();
            }   
        }
    }

    vector<vector<int>> combinationSum2(vector<int>&a, int tgt) {
        sort(a.begin(),a.end());
        vector<vector<int>>ans;
        vector<int>v;
        go(ans,a,v,tgt,0); 
        return ans;
    }
};
// @lc code=end

