class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        vector<int> nums = arr;
        sort(nums.begin(),nums.end());
        unordered_map<int,int> mp;
        vector<int> temp(nums.size()); vector<int> ranks(nums.size());

        if(arr.empty()) return {};
        temp[0]=1; ranks[0]=1; mp[nums[0]] = 1;
        for(int idx=1; idx<nums.size(); idx++){
            if(nums[idx]>nums[idx-1]) temp[idx]=temp[idx-1]+1;
            else if (nums[idx]==nums[idx-1]) temp[idx]=temp[idx-1];
            mp[nums[idx]] = temp[idx];
        }
        for(int jdx=0; jdx<arr.size(); jdx++){
            ranks[jdx] = mp[arr[jdx]];
        }
        return ranks;
    }
};