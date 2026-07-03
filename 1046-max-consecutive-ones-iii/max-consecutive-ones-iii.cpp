class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int start = 0; int end = 0;
        int maxlen = INT_MIN;
        while(end<nums.size()){
            if(nums[end]==0 && k>0){
                k--;
            }
            else if(nums[end]==0 && k==0){
                maxlen = max(maxlen,end-start);
                while(nums[start]!=0) start++;
                start++;
            }
            maxlen = max(maxlen,end-start+1);
            end++;
        }
        return maxlen;
    }
};