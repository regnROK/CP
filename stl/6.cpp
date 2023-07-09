//Roman to Integer

class Solution {
public:
    int romanToInt(string s) {
        int count = 0;
        for(int i = 0; i<s.size(); i++){
            if(s[i]=='I' && s[i+1]!='X' && s[i+1]!='V'){
                count++;
            }
            else if(s[i]=='X' && s[i+1]!='L' && s[i+1]!='C'){
                count = count + 10;
            }
            else if(s[i]=='C' && s[i+1]!='D' && s[i+1]!='M'){
                count = count + 100;
            }
            else if(s[i]=='V'){
                count = count + 5;
            }
            else if(s[i]=='L'){
                count = count + 50;
            }
            else if(s[i]=='D'){
                count = count + 500;
            }
            else if(s[i]=='M'){
                count = count + 1000;
            }
            else if(s[i]=='I' && s[i+1]=='V'){
                count = count + 4 - 5;
            }
            else if(s[i]=='I' && s[i+1]=='X'){
                count = count + 9 -10;
            }
            else if(s[i]=='X' && s[i+1]=='L'){
                count = count + 40 - 50;
            }
            else if(s[i]=='X' && s[i+1]=='C'){
                count = count + 90 - 100;
            }
            else if(s[i]=='C' && s[i+1]=='D'){
                count = count + 400 - 500;
            }
            else if(s[i]=='C' && s[i+1]=='M'){
                count = count + 900 - 1000;
            }
        }  
        return count;  
    }
};