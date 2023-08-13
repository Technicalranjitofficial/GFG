class Solution
{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(vector<int>arr, int n, long long s)
    {
     int start = 0;
     int end = 0;
     int currSum = arr[0];
     bool isFound = false;
   
     vector<int> result;
     if(s==0){
         result.push_back(-1);
         return result;
     }
     while(end<arr.size()){
         if(currSum==s){
             isFound = true;
             break;
         }else if(currSum<s){
             end++;
             if(end<s)
             currSum +=arr[end];
         }else{
             currSum -= arr[start];
             start++;
         }
         
     }
     
     if(isFound){
         result.push_back(start+1);
         result.push_back(end+1);
         
     }else{
         result.push_back(-1);
     }
     return result;
    }
    
};