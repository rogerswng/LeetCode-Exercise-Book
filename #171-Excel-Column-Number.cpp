class Solution {
public:
    int titleToNumber(string s) {
        int len = s.length();
        if(!len)
            return 0;
        int base = 1, ans = 0;
        //transform(s.begin(), s.end(), s.begin(), toupper);
        //transfrom method in c++ string::
        for(int i = len-1; i >= 0; i--)
        {
            ans += ((s[i]-'A'+1)*base);
            base *= 26;
        }
        return ans;
    }
};
