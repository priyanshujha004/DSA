class NumArray {
private:
    vector<int> prefix;
public:
    NumArray(vector<int>& nums) {
        prefix.resize(nums.size()+1,0);
        prefix[0]=nums[0];
        for(int idx = 1; idx<nums.size(); idx++){
            prefix[idx] = prefix[idx-1] + nums[idx];
        }
    }
    int sumRange(int left, int right) {
        if(left==0) return prefix[right];
        else return prefix[right] - prefix[left-1];
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */