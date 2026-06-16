class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        int n = s.size();

        for (int i = 1; i <= n / 2; i++) {
            if (n % i == 0) {
                string st = s.substr(0, i);
                string b = "";

                for (int j = 0; j < n / i; j++) {
                    b += st;
                }

                if (b == s) {
                    return true;
                }
            }
        }

        return false;
    }
};
