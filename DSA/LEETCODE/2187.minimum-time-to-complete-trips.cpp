/*
 * @lc app=leetcode id=2187 lang=cpp
 *
 * [2187] Minimum Time to Complete Trips
 */

// @lc code=start
class Solution {
public:
    bool check(long long mid,vector<int>&time ,int totaltrips){
        int trips=0;
        int n=time.size();
        for(int i=0;i<n;i++)
        {
            trips+=mid/time[i];
        }
        if(trips<totaltrips)return false;
        else return true;
        }
    long long minimumTime(vector<int>& time, int totalTrips) {
        int n = time.size();
        int mx = -1;
        for (int i = 0; i < n; i++)
        {
            if(mx<time[i])mx=time[i];
        }
        long long lo = 1;
        long long hi = (long long)mx *(long long) totalTrips ;
        long long ans=-1;
        while(lo<=hi){
            long long mid=lo+(hi-lo)/2;
            if(check(mid,time,totalTrips)){
                ans=mid;
                hi=mid-1;
            }
            else lo=mid+1;
        }
        return ans;
    }
};
// @lc code=end

