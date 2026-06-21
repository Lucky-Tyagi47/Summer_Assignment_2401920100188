class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int n = s1.size();
        int m = s2.size();

        if (n > m)
            return false;

        vector<int> x(26, 0);
        vector<int> y(26, 0);

        for (int i = 0; i < n; i++) {
            x[s1[i] - 'a']++;
        }
        for (int i = 0; i < n; i++) {
            y[s2[i] - 'a']++;
        }

        if (x == y)
            return true;

        for (int i = n; i < m; i++) {
            y[s2[i] - 'a']++;
            y[s2[i - n] - 'a']--;

            if (x == y)
                return true;
        }

        return false;
    }
};
