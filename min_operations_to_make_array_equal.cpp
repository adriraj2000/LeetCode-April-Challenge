class Solution {
public:
    int minOperations(int n) {
        int moves = 0;
        if(n%2)
        {
            for(int i = 0;i<n/2;i++)
            {
                moves += 2*(n/2-i);
            }
        }
        else
        {
            for(int i = 0;i<n/2;i++)
            {
                moves += n - (2*i+1);
            }
        }
        return moves;
    }
};