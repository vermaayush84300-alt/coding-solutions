class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int>nums3(m+n);
        int i=0, j=0, k=0;
        while(i<=m-1 && j<=n-1){
            if(nums1[i]<nums2[j]){
                nums3[k]=nums1[i];
                i++;
            }
            else{
                nums3[k]=nums2[j];
                j++;
            }
            k++;
        }
        if(i==m){
            while(j<=n-1){
                nums3[k]=nums2[j];
                k++;
                j++;
            }

        }
           if(j==n){
            while(i<=m-1){
                nums3[k]=nums1[i];
                k++;
                i++;
            }

        }
        for(int t=0; t<m+n; t++){
            nums1[t] = nums3[t];
        }
    }
};