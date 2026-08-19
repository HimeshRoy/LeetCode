class Solution {
public:
    int reverse(int x) {
        int reverse = 0;
        while(x != 0 || x > 0){
            int reminder = x%10;
            
            if (reverse > INT_MAX / 10 || (reverse == INT_MAX / 10 && reminder > 7))
             return 0;

            if (reverse < INT_MIN / 10 || (reverse == INT_MIN / 10 && reminder < -8))
             return 0;

            reverse = reverse*10 + reminder;
            x = x/10;
        }

        return reverse;
    }
};