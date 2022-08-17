class Solution {
public:
    void moveZeroes(vector<int>& nums) {
//         int n=nums.size();
//         int i=0;
        
//         while(i<n){
              
//           if(nums[i]==0){
//               int temp=nums[i];
//               for(int j=i;j<n;j++){
                  
//                   nums[j]=nums[j+1];
//               }
//               nums[n-1]=temp;
//               i++;
//           }
        
//         else{
            
//             i++;
//         }
       
   // }
        
        
        int count=0;
        
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=0){
                
                nums[count++]=nums[i];
                //count++;
            }
        }
        
        for(int i=count;i<nums.size();i++){
            
            nums[i]=0;
        }
        
 }
    
};
