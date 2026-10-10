class Solution {
public:
    int resilientSubarray(vector<int>& nums, int k) {
        int n = nums.size();
        int ans =1;
        for(int i=0; i<n ; i++){
            long long sum =0;
            int rem =-1;
            bool valid = true ;
            for(int j =i; j<n;j++){
                sum+=nums[j];
                int r = ((nums[j]%k)+k)%k;
                if(rem ==-1){
                    rem =r;
                }
                else if(rem!=r){
                    
                
                
                        
                        
                        valid=false;
                        break;
                } 
        
                if(valid && (sum -nums[j])%k==0){
                    ans=max(ans,j-i+1);
                }
            }
    }
        return ans;
    }
};