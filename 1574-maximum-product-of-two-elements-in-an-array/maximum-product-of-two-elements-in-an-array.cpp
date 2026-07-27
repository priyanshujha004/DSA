class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int product = INT_MIN;
        for(int idx=0; idx<nums.size(); idx++){
            for(int jdx=idx+1; jdx<nums.size(); jdx++){
                int val = (nums[idx]-1) * (nums[jdx]-1);
                if(val>=product) product = val;
            }
        }
        return product;
    }
};