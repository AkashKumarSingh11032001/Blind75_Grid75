class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        map<int,int>mapX;
        int n = nums.size();
        
        for(auto i : nums) mapX[i]++;
        
        for(auto i : mapX) if(i.second > n/2) return i.first;
        
        return 0;
        
    }
};