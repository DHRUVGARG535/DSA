class Solution {
public:
    char findTheDifference(string s, string t) {
        int sum = 0;
        for(int i =0;i<s.length();i++) {
            int ch = s[i];
            sum+=ch;
        }
     
        int sum2 = 0;
        for(int i =0;i<t.length();i++) {
            int ch = t[i];
            sum2+=ch;
        }


        return (char) sum2-sum;
    }
};