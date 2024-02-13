class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        map<int,int>mapX;
        for(auto i : nums) mapX[i]++;
        for(auto i : mapX) if(i.second >= 2) return i.first;
        
        return 0;
        
    }
};