class Solution {
public:
    void reverseString(vector<char>& s) {
        int l = 0 , r= s.size()-1;
        for(int i=0 ; i<s.size() ; i++){
            if(l<r){
                swap(s[l],s[r]);
                l++;
                r--;
            }
        }
        return;
    }
};