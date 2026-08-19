class Solution {
public:
    bool isPalindrome(int x) {
         if(x < 0){
            return false;
        }

        long reverse = 0;
        int original = x;

        while(x != 0){
            int reminder = x%10;
            reverse = reverse*10 + reminder;
            x = x/10;
        }
        
        if(original == reverse){
            return true;
        } else{
            return false;
        }
    }
};