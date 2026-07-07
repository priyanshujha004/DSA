class Solution {
public:
    long long sumAndMultiply(int n) {
        if(n==0) return 0;
        long long sum = 0; long long num = 0; long long place = 1;
        long long temp = n; if(temp<0) temp=-temp;
        while(temp!=0){
            int dig = temp%10;
            if(dig!=0){
                sum+=dig;
                num+=(place*dig);
                place*=10;
            }
            temp/=10;
        }
        return num*sum;
    }
};