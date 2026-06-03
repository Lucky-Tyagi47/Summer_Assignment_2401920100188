class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
     int n=nums.size();
        vector<int>a(n);
    
        int start=0;
        int end=n-1;
        int pos=n-1;
        while(start<=end){
            if(nums[start]*nums[start]>nums[end]*nums[end]){
                a[pos]=nums[start]*nums[start];
                start++;


            }
            else{
                a[pos]=nums[end]*nums[end];
                end--;
            }
            
            
            pos--;
        }
        return a;
    }
};
