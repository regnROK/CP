//  Distinct Candies

class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        vector<int>vec(candyType);
        sort(vec.begin(),vec.end());
        int c=1;
        for(int i=0;i<(vec.size()-1);i++){
            if(vec[i]!=vec[i+1]){
                c++;
            }
        }
        int n=vec.size()/2;
        return min(n,c);
    }
};