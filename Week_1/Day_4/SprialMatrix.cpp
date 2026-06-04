class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        int row=matrix.size();
        int column=matrix[0].size();
        int count=0;
        int total=row*column;
        int rowstart=0;
        int rowend=row-1;
        int columnstart=0;
        int columnend=column-1;
        while(count<total){
            for(int index=columnstart;count<total&&index<=columnend;index++){
                ans.push_back(matrix[rowstart][index]);
                count++;
            }
            rowstart++;
            for(int index=rowstart;count<total&&index<=rowend;index++){
                ans.push_back(matrix[index][columnend]);
                count++;
            }
            columnend--;
            for(int index=columnend;count<total&&index>=columnstart;index--){
                ans.push_back(matrix[rowend][index]);
                count++;
            }
            rowend--;
            for(int index=rowend;count<total&&index>=rowstart;index--){
                ans.push_back(matrix[index][columnstart]);
                count++;
            }
            columnstart++;
        }
        return ans;
        
        
        
        
    }
};
