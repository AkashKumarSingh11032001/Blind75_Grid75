class Solution {
public:
    int longestSubarray(vector<int>& A) {
        int i = 0;
        int cnt = 0;
        int ans = 0;
        
        for(int j = 0; j < A.size(); j++){
            if(A[j] == 0) cnt += 1;
            while(cnt > 1) cnt -= A[i++] == 0;
            ans = max(ans,j-i);
        }
        return ans;
        
    }
};