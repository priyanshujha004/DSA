class Solution {
public:
    void combination(vector<int>& candidates, vector<int>& ans, int target, vector<vector<int>> & result, int idx){
        int sum = accumulate(ans.begin(),ans.end(),0);
        if(sum==target){
            result.push_back(ans);
            return;
        }
        else if (sum>target || idx>=candidates.size()) return;
        
        ans.push_back(candidates[idx]);
        combination(candidates,ans,target,result,idx+1);
        ans.pop_back();
        while (idx + 1 < candidates.size() && candidates[idx] == candidates[idx + 1]) idx++;
        combination(candidates,ans,target,result,idx+1);
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>> result; vector<int> ans;
        sort(candidates.begin(),candidates.end());
        combination(candidates,ans,target,result,0);
        return result;
    }
};