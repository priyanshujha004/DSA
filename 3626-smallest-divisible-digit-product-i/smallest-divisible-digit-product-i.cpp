class Solution {
public:
    int prodDigit(int num, int target, int product){
        if(product%target==0){
            return num;
        }
        int x = num + 1; product = 1;
        int temp = x;
        while(temp>0){
            int digit = temp%10;
            product *= digit;
            temp/=10;
        }
        return prodDigit(x,target,product);
    }
    int smallestNumber(int n, int t) {
        int y = n; int product = 1;
        while(y!=0){
            int digit = y%10;
            product *= digit;
            y/=10;
        }
        return prodDigit(n,t,product);
    }
};