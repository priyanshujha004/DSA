class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        unordered_map<int,int> mp;
        for(int idx=0; idx<numbers.size(); idx++){
            mp[numbers[idx]]=idx;
        }
        for(int idx=0; idx<numbers.size(); idx++){
            if(mp.find(target-numbers[idx])!=mp.end() && idx!=mp[target-numbers[idx]]){
                return {idx+1,mp[target-numbers[idx]]+1};
            }
        }
        return {};
    }
};