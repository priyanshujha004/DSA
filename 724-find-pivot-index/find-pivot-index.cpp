class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        vector<int> prefix(nums.size(),0);
        vector<int> suffix(nums.size(),0);
        for(int idx=1; idx<nums.size(); idx++){
            prefix[idx] = prefix[idx-1] + nums[idx-1];
        }
        for(int jdx=nums.size()-2; jdx>=0; jdx--){
            suffix[jdx] = suffix[jdx+1] + nums[jdx+1];
        }
        int pivot = INT_MAX;
        for(int pdx = 0; pdx<nums.size(); pdx++){
            if(prefix[pdx]==suffix[pdx]){
                pivot = min(pivot,pdx);
            }
        }
        if(pivot==INT_MAX) return -1;
        else return pivot;
    }
};