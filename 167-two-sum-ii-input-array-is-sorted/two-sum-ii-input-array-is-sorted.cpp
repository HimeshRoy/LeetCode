class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int left = 0;
        int right = numbers.size() - 1;

        vector<int>v;

        while(left < right){
            int sum = numbers[left] + numbers[right];
            if(sum == target){
                v.push_back(left+1);
                v.push_back(right+1);
                return v;
            } else if(sum > target ){
                right--;
            } else{
                left++;
            }
        }

        return v;
    }
};