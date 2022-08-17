class Solution {
public:
    void rotate(vector<int>& nums, int k) {
//         int i=nums.size()-1;
//         while(k>0){
            
//             int temp=nums[i];
            
//             int x=nums.size()-2;int j=nums.size()-1;
//             while(x>=0 && j>=0){

//               nums[j]=nums[x];
//               j--;
//               x--;
//             }
//             nums[0]=temp;
            
//         }   
     
        

        int n=nums.size();
        k=k%n;
        reverse(nums.begin(),nums.end()-k);
        
        reverse(nums.end()-k,nums.end());
        
        
        reverse(nums.begin(),nums.end());
        
    }
};
