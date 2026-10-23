class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int idx = 0; int jdx = 1; int count = 0;
        while(idx<jdx && jdx<nums.size()){
            if(nums[idx]==nums[jdx]) jdx++;
            else if(nums[idx]!=nums[jdx]){
                idx++;
                nums[idx]=nums[jdx];
                count++; jdx++;
            }
        }
        return count+1;
    }
};