class Solution {
public:
    void reverseString(vector<char>& s) {
        int n=s.size();
        int start=0;
        int last=n-1;
        int temp;
        while(start<last){
            temp=s[start];
            s[start]=s[last];
            s[last]=temp;
            start++;
            last--;

        }
        
    }
};
