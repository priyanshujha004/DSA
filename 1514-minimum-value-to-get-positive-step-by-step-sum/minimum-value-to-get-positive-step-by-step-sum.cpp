class Solution {
public:
    int minStartValue(vector<int>& nums) {
        int sum = 0; int minValue = 0;
        for(int idx=0; idx<nums.size(); idx++){
            sum+=nums[idx];
            minValue = min(sum,minValue);
        }
        int startValue = 1 - minValue;
        return startValue;
    }
};