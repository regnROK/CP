// Bulls and Cows

class Solution {
public:
    string getHint(string secret, string guess) {
        int bull=0;
        int cow=0;
        vector<int> vec(10,0),vec2(10,0);
        int n=secret.size();
        for(int i=0;i<n;i++){
            if(secret[i]==guess[i]){
                bull++;
            }
            else{
                vec[secret[i]-'0']++;
                vec2[guess[i]-'0']++;
        }
        }
        for(int i=0;i<10;i++){
            cow = cow + min(vec[i],vec2[i]);
        }
        return to_string(bull)+"A"+to_string(cow)+"B";
    }
};