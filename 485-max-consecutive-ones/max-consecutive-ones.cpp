class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int intitalCount = 0;
        int maxCount = 0;

        for (int num : nums) {
            if (num == 1) {
                intitalCount++;
                maxCount = max(maxCount, intitalCount);
            } else {
                intitalCount = 0;
            }
        }

        return maxCount;
    }
};