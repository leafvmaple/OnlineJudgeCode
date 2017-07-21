class Solution {
public:
    int romanToInt(string s) {
        std::map<char, int> roman;
        roman['I'] = 1;
        roman['V'] = 5;
        roman['X'] = 10;
        roman['L'] = 50;
        roman['C'] = 100;
        roman['D'] = 500;
        roman['M'] = 1000;
        int nRoman = 0, nLast = 0;
        for (int i = 0; i < s.size(); i++) {
            int nCur = roman[s[i]];
            if (i && nLast < nCur) {
                nRoman += nCur - 2 * nLast;
            }
            else {
                nRoman += nCur;
            }
            nLast = nCur;
        }
        return nRoman;
    }
};

// Runtime: 39 ms