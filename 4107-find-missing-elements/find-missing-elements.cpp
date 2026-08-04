class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        set<int> st(nums.begin(),nums.end()); vector<int> empty;
        int minE = *min_element(nums.begin(),nums.end());
        int maxE = *max_element(nums.begin(),nums.end());

        for(int idx=minE; idx<maxE; idx++){
            if(st.find(idx)==st.end()) empty.push_back(idx);
        }
        return empty;
    }
};