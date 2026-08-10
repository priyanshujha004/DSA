class Solution {
public:
    // MEMOIZATION
    int solve(int n, vector<int> &dp){
        if(n<=1) return n;
        if(dp[n]!=-1) return dp[n];
        return dp[n] = solve(n-1,dp) + solve(n-2,dp);
    }
    int fib(int n) {
    // RECURSION
    //    if(n==0 || n==1) return n;
    //    else return fib(n-1) + fib(n-2);

    // TABULATION
    // vector<int> dp(n+1); dp[0]=0;
    // if(n>0) dp[1]=1;
    // for(int idx = 2; idx<=n; idx++){
    //     dp[idx] = dp[idx-1] + dp[idx-2];
    // }
    // return dp[n];

    // MEMOIZATION
    vector<int> dp(n+1,-1);
    return solve(n,dp);
    }
};