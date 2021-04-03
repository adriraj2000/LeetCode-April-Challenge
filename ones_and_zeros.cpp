class Solution {
public:
    int countOnes(string s)
    {
        int ans = 0;
        for(int i = 0;i<s.length();i++)
        {
            ans += (s[i] == '1');
        }
        return ans;
    }
    
    int findMaxForm(vector<string>& strs, int m, int n) {
        // int res =  0;
        vector<vector<int> > dp(m + 1, vector<int>(n + 1));
        for(auto str : strs)
        {
            int ones = countOnes(str),zeros = str.length()-ones;
            for(int i = m;i>=zeros;i--)
            {
                for(int j = n;j>=ones;j--)
                {
                    dp[i][j] = max(dp[i][j],dp[i-zeros][j-ones] + 1);
                }
            }
        }
        return dp[m][n];
    }
};