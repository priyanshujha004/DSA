class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int idx = 0;
        int jdx = numbers.size() - 1;
        while(idx<jdx){
            if(numbers[idx]+numbers[jdx]==target) return {idx+1,jdx+1};
            else if(numbers[idx]+numbers[jdx]<target) idx++;
            else jdx--;
        }
        return {};
    }
};