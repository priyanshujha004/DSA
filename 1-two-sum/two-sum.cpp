class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> mp;
        for(int idx=0; idx<nums.size(); idx++){
            mp[nums[idx]]=idx;
        }
        int m,n;
        for(int jdx=0; jdx<nums.size(); jdx++){
            if(mp.find(target-nums[jdx])!=mp.end() && jdx!=mp[target-nums[jdx]]){
                m = jdx;
                n = mp[target-nums[jdx]];
            }
        }
        return {m,n};
    }
};