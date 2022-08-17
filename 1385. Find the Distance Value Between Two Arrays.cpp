// Input: arr1 = [4,5,8], arr2 = [10,9,1,8], d = 2

// For arr1[0] = 4 we have:
// | 4 - 10 | = 6 > d=2
// | 4 - 9 | = 5 > d=2
// | 4 - 1 | = 3 > d=2
// | 4 - 8 | = 4 > d=2
// This is valid because all distances are MORE THAN d

// For arr1[2] = 8 we have:
// | 8 - 10 | = 2 <= d=2 <-- This is INVALID. You can just stop here.
// | 8 - 9 | = 1 <= d=2
// | 8 - 1 |=7 > d=2
// | 8 - 8 | = 0 <= d=2
// This is INVALID because there is at least 1 distance that is LESS THAN or EQUAL TO d

class Solution {
public:
    bool isvaild(vector<int>& arr2, int target, int d){
        int s=0;int e=arr2.size()-1;
        while(s<=e){
            int mid=s+(e-s)/2;
            if(abs(arr2[mid]-target) <=d)return false;         //invaild case 
            
            if(arr2[mid]>target){
                e=mid-1;
            }
            else{
                
                s=mid+1;
            }
        }
        return true;
    }
    
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        
        sort(arr2.begin(),arr2.end());
        
        int count =0;
        for(int i=0;i<arr1.size();i++){
            
            if(isvaild(arr2,arr1[i],d))count++;
         }
        
        return count;
    }
};
