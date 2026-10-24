// class Solution {
// public:
//     char repeatedCharacter(string s) {
//         map<char, int> mp;
//         for(char c : s){
//             mp[c]++;
//             if(mp[c] == 2){
//                 return c; 
//             }
//         }
//         return '\0';
//     }
// };

class Solution {
public:
    char repeatedCharacter(string s) {
        set<char> st;
        for(char c : s) {
            if(st.find(c) != st.end()){
                return c;
            }
            st.insert(c);
        }
        return '\0';
    }
};