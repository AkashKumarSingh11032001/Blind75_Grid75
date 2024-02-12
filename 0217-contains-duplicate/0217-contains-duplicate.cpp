class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        map<int,int>mapX;
        for(auto i : nums) mapX[i]++;
        for(auto i : mapX) if(i.second >= 2) return true;
        return false;
        
    }
};