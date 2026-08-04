class Solution {
public:
    void subset(vector<int>& nums,vector<int> &ans,vector<vector<int>> &result, map<vector<int>,int> &mp, int idx){
        if(idx==nums.size()){
            mp[ans]++;
            if(mp[ans]<=1) result.push_back(ans);
            return;
        }
        ans.push_back(nums[idx]);
        subset(nums,ans,result,mp,idx+1);
        ans.pop_back();
        subset(nums,ans,result,mp,idx+1);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> result; vector<int> ans; map<vector<int>,int> mp;
        sort(nums.begin(),nums.end());
        subset(nums,ans,result,mp,0);
        return result;
    }
};