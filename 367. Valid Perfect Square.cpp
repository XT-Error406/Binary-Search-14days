class Solution {
public:
    bool isPerfectSquare(int num) {
        int s=0;
        int e=num;
        if(num==1)return true;
        
        while(s<e){
            
            
            long long mid=s+(e-s)/2;
            
            if(mid*mid==num){
                
                return true;
            }
            else if(mid*mid>num){
                e=mid;
            }
            else{
                s=mid+1;
            }

        }
        return false;
    }
};
