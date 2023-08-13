class Solution{
  public:
    int missingNumber(vector<int>& array, int n) {
        int XorFrom1toN = 0;
        int Currxor = 0;
        for(int i = 1; i<=n;i++){
            XorFrom1toN = XorFrom1toN ^ i;
        }
        
        for(int i = 0;i<n-1;i++){
            Currxor = Currxor ^ array[i];
        }
        
        int res = Currxor ^ XorFrom1toN;
        return res;
    }
};