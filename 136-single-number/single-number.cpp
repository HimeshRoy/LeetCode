// class Solution {
// public:
//     int singleNumber(vector<int>& nums) {
//         set<int>s;
//         for(int x : nums){
//             if(s.count(x)){
//                 s.erase(x);
//             }else{
//                 s.insert(x);
//             }
//         }

//         return *s.begin();
//     }
// };

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans = 0;
        for (int x : nums) {
            ans ^= x;
        }
        return ans;
    }
};