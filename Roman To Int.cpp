
/*
Ques:
Given a roman numeral, convert it to an integer. Input is guaranteed to be within the range from 1 to 3999.

@author almique
*/





class Solution {
public:
    int romanToInt(string s) {
        unordered_map<string, int> roman = {{"I", 1}, {"V", 5}, {"X", 10}, {"L", 50}, {"C", 100},
                                          {"D", 500}, {"M", 1000}, {"IV", 4}, {"IX", 9}, {"XL", 40},
                                          {"XC", 90}, {"CD", 400}, {"CM", 900}};
        int temps = 0;
        for(int i = 0; i < s.size(); i++) {
            string st;
            if((i + 1 < s.size()) && 
            (s[i] == 'I' && (s[i + 1] == 'V' || s[i + 1] == 'X')) ||
            (s[i] == 'X' && (s[i + 1] == 'L' || s[i + 1] == 'C')) ||
            (s[i] == 'C' && (s[i + 1] == 'D' || s[i + 1] == 'M'))) 
            {
                st.push_back(s[i]);
                st.push_back(s[++i]);
            }
            else st.push_back(s[i]);
            int itg = roman.find(st)->second;
            temps += itg;
        }
        return temps;

        
    }
};
