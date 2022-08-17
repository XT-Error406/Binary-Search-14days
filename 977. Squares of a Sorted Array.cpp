class Solution {
public:
    
   
    vector<int> sortedSquares(vector<int>& nums) { 
        
      int start=0;int end=nums.size()-1; 
       vector<int>ans;
    
        while(start<=end){

           if(nums[start]>nums[end]){
               
               int sqr=nums[start]*nums[start];
               ans.push_back(sqr);
               start++;
             }
             
             else {                       // (nums[start]<nums[end]){
                 
               int sqr=nums[end]*nums[end];
                ans.push_back(sqr);
                 end--;
             }
            
         }
        
      sort(ans.begin(),ans.end());
        
        return ans;
        
        
    }
};
