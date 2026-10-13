class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> st;
        for(int idx=0; idx<nums.size(); idx++){
            if(!st.contains(nums[idx])) st.insert(nums[idx]);
        }
        return !(st.size()==nums.size());
    }
};