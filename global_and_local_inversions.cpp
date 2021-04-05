class Solution {
public:
 
    bool isIdealPermutation(vector<int>& A) {
        
        int n = A.size();
        int currmax = 0;
 
        for(int i=0;i<n-2;i++)
        {
            currmax = max(currmax,A[i]);
 
            if(currmax>A[i+2])
                return false;
        }
 
        return true;
    }
};