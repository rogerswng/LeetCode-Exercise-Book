class Solution {
public:
    bool isAnagram(string s, string t) {
        //Noted the strings contain only lowercase alphabets; otherwise there should be a thought of lowercase and uppercase letters.
        //Noted that the strings contain only alphabets, what if the strings contain unicode characters?
        //Another beautiful solution in discuss, count[26]++--
        map<char, int> m1, m2;
        int len1 = s.length(), len2 = t.length();
        if(!len1&&!len2)
            return true;
        else if(len1 != len2)
            return false;
        for(int i = 0; i < len1; i++)
        {
            m1[s[i]]++; m2[t[i]]++;
        }
        int flag = 1;
        map<char, int>::iterator it;
        for(map<char, int>::iterator i = m1.begin(); i != m1.end(); i++)
        {
            if((it = m2.find(i->first)) == m2.end())
            {
                flag = 0;
                break;
            }
            else if(i->second != it->second)
            {
                flag = 0;
                break;
            }
        }
        if(flag)
            return true;
        return false;
    }
};
