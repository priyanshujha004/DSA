class Solution {
public:
    int alternateDigitSum(int n) {
        vector<int> nums;
        int x = n;
        while(x!=0){
            nums.push_back(x%10);
            x/=10;
        }
        int sum = 0; bool flag = true;
        for(int idx = nums.size()-1; idx>=0; idx--){
            if(flag==true){
                sum+= nums[idx];
                flag = false;
            }
            else{
                sum-=nums[idx];
                flag = true;
            }
        }
        return sum;
    }
};