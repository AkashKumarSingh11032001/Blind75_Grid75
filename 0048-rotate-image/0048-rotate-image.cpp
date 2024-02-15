#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void transpose(vector<vector<int>>& mat){
        
        int n = mat.size();
        
        for(int i = 0; i < n;i++){
            for(int j = i+1; j<n;j++){
                swap(mat[i][j],mat[j][i]);
            }
        }
    }
    void rotate(vector<vector<int>>& mat) {
        
        int n = mat.size();
        
        transpose(mat);
        
        for(int i = 0; i <n; i++){
            reverse(mat[i].begin(),mat[i].end());
        }

    }
};