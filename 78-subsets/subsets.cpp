class Solution {
public:
    void print(vector<int> &nums, vector<int> &ans, vector<vector<int>> &result, int idx){
        if(idx==nums.size()){
            result.push_back(ans);
            return;
        }
        ans.push_back(nums[idx]);
        print(nums,ans,result,idx+1);
        ans.pop_back();
        print(nums,ans,result,idx+1);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> result; vector<int> ans;
        print(nums,ans,result,0);
        return result;
    }
};