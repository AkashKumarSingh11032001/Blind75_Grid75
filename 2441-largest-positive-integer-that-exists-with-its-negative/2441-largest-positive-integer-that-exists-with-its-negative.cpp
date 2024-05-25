class Solution {
public:
    int findMaxK(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        for(int i = n-1; i >= 0; i--){
            if(nums[i] > 0) {
                auto it = find(nums.begin(), nums.end(), -1*nums[i]); 
                if (it != nums.end())  
                { 
                    return nums[i];
                } 
                else { 
                    continue;
                } 
            }
        }
        
        return -1;
        
    }
};