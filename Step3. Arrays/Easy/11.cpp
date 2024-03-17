// leetcode --> https://leetcode.com/problems/max-consecutive-ones/

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n = nums.size();
        int count=0, ans=0;
        for(int i =0; i<n; i++)
        {
            if(nums[i] != 1){
                ans= max(ans, count);
                count=0;
            }
            else{
                count++;
            }
        }
        ans=max(ans, count);
        return ans;
    }
};