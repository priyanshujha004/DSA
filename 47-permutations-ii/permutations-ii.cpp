class Solution {
public:
    void getPermutations(vector<int>& nums, vector<vector<int>> &answer, map<vector<int>,int> &mp, int idx){
        if(idx==nums.size()){
            mp[{nums}]++;
            if(mp[nums]==1){
                answer.push_back({nums});
                return;
            }
        }
        for(int jdx=idx; jdx<nums.size(); jdx++){
            swap(nums[jdx],nums[idx]);
            getPermutations(nums,answer,mp,idx+1);
            swap(nums[jdx],nums[idx]);
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> answer; map<vector<int>,int> mp;
        getPermutations(nums,answer,mp,0);
        return answer;
    }
};