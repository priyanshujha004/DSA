class Solution {
public:
    void combinations(vector<vector<int>> &answer, vector<int> &nums, vector<int> &curr, int k, int idx){
        if(idx>=nums.size()) return;
        if(curr.size()==k){
            answer.push_back(curr);
            return;
        }
        curr.push_back(nums[idx]);
        combinations(answer,nums,curr,k,idx+1);
        curr.pop_back();
        combinations(answer,nums,curr,k,idx+1);
    }
    vector<vector<int>> combine(int n, int k) {
        vector<int> nums; vector<vector<int>> answer;
        vector<int> curr;
        for(int idx = 0; idx<=n; idx++){
            nums.push_back(idx+1);
        }
        combinations(answer,nums,curr,k,0);
        return answer;
    }
};