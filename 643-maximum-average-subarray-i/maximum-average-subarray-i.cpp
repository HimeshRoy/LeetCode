class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int s = 0 ;
        for(int i = 0 ; i < k ; i++){
            s += nums[i];
        }

        int ss = s;
        for(int i = k ;  i <  nums.size() ; i++){
            s = s - nums[i-k] + nums[i];
            ss = max(ss,s);
        }

        return (double)ss/k;
    }
};