class Solution {
public:
    int romanToInt(string s) {
        int ans = 0, pre = 0, cur = 0;
	
	for(int i = 0; i <= s.length()-1; i++)
	{
		switch(s[i])
		{
			case 'M': cur = 1000; break;
			case 'D': cur = 500; break;
			case 'C': cur = 100; break;
			case 'L': cur = 50; break;
			case 'X': cur = 10; break;
			case 'V': cur = 5; break;
			case 'I': cur = 1; break;
		}
		if(pre < cur)
		{
			if(pre == 1 && cur == 5) ans += 3;
			else if(pre == 1 && cur == 10) ans += 8;
			else if(pre == 10 && cur == 50) ans += 30;
			else if(pre == 10 && cur == 100) ans += 80;
			else if(pre == 100 && cur == 500) ans += 300;
			else if(pre == 100 && cur == 1000) ans += 800;
			else ans += cur;
			pre = cur;
		}
		else
		{
			ans += cur;
			pre = cur;
		}
	}
	return ans;
    }
};
