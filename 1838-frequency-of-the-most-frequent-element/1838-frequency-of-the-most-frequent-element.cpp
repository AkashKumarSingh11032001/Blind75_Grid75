class Solution {
public:
    int maxFrequency(vector<int>& arr, int k) {
        sort(arr.begin(),arr.end());

        long i = 0;
        long ans = 1;
        long sum = 0;
        for(int j = 0; j < arr.size(); j++){
            sum += arr[j];
            while((j-i+1) * arr[j] - sum > k) sum -= arr[i++];
            ans = max(ans,j-i+1);
        }
        return ans;
    }
};