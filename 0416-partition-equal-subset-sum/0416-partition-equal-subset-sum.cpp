class Solution {
public:
    vector<vector<int>>dp;
    bool solve(vector<int>& nums,int tg,int i){
        if(i>=nums.size())
            return false;
        if(tg==0)
            return true;
        if(tg<0)
            return false;
        if(dp[i][tg] != -1)
        return dp[i][tg];
        return dp[i][tg] = solve(nums, tg - nums[i], i + 1) || solve(nums, tg, i + 1);
        
    }
    bool canPartition(vector<int>& nums) {
        int chk=0;
        for(auto it:nums)
            chk+=it;
        if(chk%2!=0)
            return false;
        dp = vector<vector<int>>(nums.size(), vector<int>(chk + 1, -1));
        return solve(nums,chk/2,0);
    }
};