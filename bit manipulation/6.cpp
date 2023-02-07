//Bitwise AND of Numbers Range.

class Solution {
public:
    int rangeBitwiseAnd(int left, int right) {
        if(left==right){
            return left;
        }
        else{
            
        for(long long int i=left;i<=right;i++){
            left = left & i;
            if(left==0){
                return left;
            }
        }
        return left;
        }
        
    }
};