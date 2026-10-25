class Solution {
  public:
    void rightPattern(int n) {
        // code here
        for(int i=0 ; i<n; i++){
                for(int j=n ; j>i;j--){
                  cout<<"*";
                }
                cout<<endl;
            }
    }
};



