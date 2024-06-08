class Solution {
public:
    int romanToInt(string s) {
        int sum=0;
        int n=s.length();
        for(int i=0;i<n;i++){
            if (i < n - 1 && s[i] == 'I' && (s[i+1] == 'V' || s[i+1] == 'X')) {
                sum -= 1;
            } else if (i < n - 1 && s[i] == 'X' && (s[i+1] == 'L' || s[i+1] == 'C')) {
                sum -= 10;
            } else if (i < n - 1 && s[i] == 'C' && (s[i+1] == 'D' || s[i+1] == 'M')) {
                sum -= 100;
            } else {
                if(s[i]=='I'){
                    sum+=1;
                }
                else if(s[i]=='V'){
                    sum+=5;
                }
                else if(s[i]=='X'){
                    sum+=10;
                }
                else if(s[i]=='L'){
                    sum+=50;
                }
                else if(s[i]=='C'){
                    sum+=100;
                }
                else if(s[i]=='D'){
                    sum+=500;
                }
                else if(s[i]=='M'){
                    sum+=1000;
                }
            }
        }
        return sum;
    }
};