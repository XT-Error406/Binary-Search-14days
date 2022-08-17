class Solution {
public:
//        int binary_search(vector<int>&nums,int target){
           
//            int n=nums.size();
//            int start=0;
//            int end=n-1;
//            int mid=start+(end-start)/2;
           
//            while(start<=end){
               
//               if(nums[mid]==target){
//                    return mid;
//                }
               
//                if(nums[mid]<target){
//                    start=mid+1;
                   
//                }
//                    else{
//                        end=mid-1;
//                    }
               
//                mid=start+(end-start)/2;
//            }
            
//            return mid;  //mid ya start
//        }
    int searchInsert(vector<int>& nums, int target) {
         
     //   return binary_search(nums,target);
        
        int start=0;
        int end=nums.size()-1;
        int mid;
        
        while(start<=end){
            
           mid=start+(end-start)/2;
            if(nums[mid]<target) start=mid+1;

             else{

             end=mid-1;
             }
        
        }
        return start;
    }
};
