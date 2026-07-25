class Solution {
public:
    int maxProduct(int n) {
        int firstMax = INT_MIN; int secondMax = INT_MIN;
        while(n>0){
            int digit = n%10;
            if(digit>=firstMax){
                secondMax = firstMax;
                firstMax = digit;
            }
            else if(digit > secondMax){
                secondMax = digit;
            }
            n/=10;
        }
        return firstMax * secondMax;
    }
};