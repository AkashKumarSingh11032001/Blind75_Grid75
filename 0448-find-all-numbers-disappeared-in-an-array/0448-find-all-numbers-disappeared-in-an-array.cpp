class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        unordered_set<int>setX(nums.begin(),nums.end());
        vector<int>ans(nums.size()-setX.size());
        int j = 0;
        for(int i = 1; i <= nums.size(); i++) if(!setX.count(i)) ans[j++] = i;
        
        return ans;
        
        
    }
};