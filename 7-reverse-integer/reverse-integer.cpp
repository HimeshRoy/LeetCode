class Solution {
public:
    int reverse(int x) {
        long reverse = 0;
        while(x != 0){
            int reminder = x%10;
            reverse = reverse*10 + reminder;
            x = x/10;
        }
        if(reverse >= INT_MIN && reverse <= INT_MAX){
        return (int)reverse;
        } else{
            return 0;
        }
    }
};