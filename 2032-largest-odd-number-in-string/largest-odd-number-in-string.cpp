class Solution {
public:
    string largestOddNumber(string num) {
        int n = num.size()-1;
        for(int i = n;i>=0;i--){
            int digit = num[i] - '0';
            if(digit%2==0)
            num.erase(i,1);

            if(digit%2!=0)
            break;

        }
        return num;
    }
};