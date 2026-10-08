class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        if(nums.empty()) return 0;
        int mx = 1, curr = 1;
        for (int i=1;i<nums.size(); i++){
            if(nums[i]>nums[i-1]){
                curr++;
            }
            else{
                curr=1;
            }
            mx = max(mx,curr);
        }
        return mx;
    }
};