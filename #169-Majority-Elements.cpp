class Solution {
public:
    int majorityElement(vector<int>& nums) {
        // What you need consider if there is no notes for the problem is if the vector is empty and if there really exists one majority element and if there are two majority elements.
        // Considering the range of integer, make a new array count[] is unacceptable.
        // Consider Big-number counts of num?
        map<int, int> cnt;
        for(int i=0; i < nums.size(); i++)
            cnt[ nums[i] ]++;

        int n = nums.size();
        for(map<int, int>::iterator iter = cnt.begin(); iter != cnt.end(); iter++)
            if( iter->second > n/2 )
                return iter->first;
    }
};
