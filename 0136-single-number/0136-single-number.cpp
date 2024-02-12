class Solution {
public:
    int singleNumber(vector<int>& nums) {
        map<int,int>mapX;
        for(auto i : nums) mapX[i]++;
        for(auto i : mapX) if(i.second == 1) return i.first;
        
        return 0;
        
    }
};