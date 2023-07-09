//pelindrom 
class Solution {
public:
    bool isPalindrome(int x) {
        string s = to_string(x);
        int l = s.size()-1;
        int n = 0;
        for(int i=0 ; i<(s.size()/2);i++){
            if(s[i]!=s[l]){
                n++;
                break;
            }
            else {
                l--;
                continue;
            }
        }
        if(n==0){
            return true;
        }
        else return false;
    }
};