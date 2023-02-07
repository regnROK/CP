// Hamming Distance

class Solution {
public:
    int hammingDistance(int x, int y) {
        int count=0;
        int p=32;
        while(p--){
        int x1=(x&1);
        int y1=(y&1);
        x=x>>1;
        y=y>>1;
        if(x1^y1==1){
            count++;
        }
        }
        return count;
    }
};