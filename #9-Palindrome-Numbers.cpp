class Solution {
public:
    bool isPalindrome(int x) {
if(x < 0) return false;
	if(x < 10) return true;
	int temp = x, ans = 0, t = 0;
	while(temp != 0)
	{
		t = temp % 10;
		ans = ans * 10 + t;
		temp /= 10;
	}
	if(ans == x) return true;
	return false;
    }
};
