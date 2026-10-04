class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int exceptednum= n*(n+1)/2;
        int actualnum=0;
        for(int num : nums){
             actualnum+=num;

        }
        return exceptednum - actualnum;
    }
};