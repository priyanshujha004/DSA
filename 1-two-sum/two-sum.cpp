class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> mp;
        for(int idx=0; idx<nums.size(); idx++){
            mp[nums[idx]]=idx;
        }
        for(int idx=0; idx<nums.size(); idx++){
            if(mp.find(target-nums[idx])!=mp.end() && idx!=mp[target-nums[idx]]){
                return {idx,mp[target-nums[idx]]};
            }
        }
        return {};
    }
};