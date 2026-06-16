class Solution {
public:
    bool isSubsequence(string s, string t) {
        int n=s.size();
        int m=t.size();
        if(n>m){
            return false;
        }
        int start=0;
        int end=0;
        while(start<n&&end<m){
            if(s[start]==t[end]){
                start++;
                end++;
            }
            else{
                end++;
            }
        }
        return start==s.size();
        
    }
};
