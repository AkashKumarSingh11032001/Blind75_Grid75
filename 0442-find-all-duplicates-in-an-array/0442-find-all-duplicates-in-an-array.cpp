class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int>res;
        map<int,int>mapX;
        for(auto i : nums) mapX[i]++;
        for(auto i : mapX) if(i.second == 2) res.push_back(i.first);
        
        return res;
        
    }
};