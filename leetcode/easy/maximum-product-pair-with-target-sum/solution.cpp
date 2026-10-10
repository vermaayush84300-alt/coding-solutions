class Solution {
public:
    vector<int> maxProductPair(vector<int>& nums, int target) {
        int n = nums.size();
        long long maxproduct= LLONG_MIN;
        vector<int>ans = {-1,-1};
        for(int i=0; i<n ; i++){
            for(int j=0 ;j<i; j++){
                if(i==j) {continue ;}
                if(1LL*nums[i]+nums[j]==target && nums[i]>nums[j]){
                    long long product = 1LL*nums[i]*nums[j];
                    if(product>maxproduct){
                        maxproduct = product;
                        ans={i,j};
                    }
                }
            }
        }
        return ans;
    }
};