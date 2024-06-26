class Solution {
public:
    vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
        int n=nums.size();
        int m=queries.size();
        vector<int>ans(m);
        sort(nums.begin(),nums.end());
        for(int i=1;i<n;i++){
            nums[i]+=nums[i-1];
        }
        for(int i=0;i<m;i++){
            int maxlen=0;
            int lo=0;
            int high=n-1;
            while(lo<=high){
                int mid=lo+(high-lo)/2;
                if(nums[mid]>queries[i])high=mid-1;
                else {
                    maxlen=mid+1;
                    lo=mid+1;
                }
            }ans[i]=maxlen;
        }  return ans;
    }
};