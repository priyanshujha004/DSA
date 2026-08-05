class Solution {
public:
    void getPermutations(vector<int>& nums, vector<vector<int>> &answer, int idx){
        if(idx==nums.size()){
            answer.push_back({nums});
            return;
        }
        for(int jdx=idx; jdx<nums.size(); jdx++){
            swap(nums[jdx],nums[idx]);
            getPermutations(nums,answer,idx+1);
            swap(nums[jdx],nums[idx]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> answer;
        getPermutations(nums,answer,0);
        return answer;   
    }
};