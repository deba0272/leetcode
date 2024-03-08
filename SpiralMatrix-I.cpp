class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int row=matrix.size();
        int col=matrix[0].size();
        vector<int>ans;
        int i;
        int left=0;
        int top=0;
        int bottom=row-1;
        int right=col-1;
        while(left<=right && top<=bottom){
            for(i=left;i<=right;i++){
                ans.emplace_back(matrix[top][i]);
            }
            top++;
            for(i=top;i<=bottom;i++){
                ans.emplace_back(matrix[i][right]);
            }
            right--;
            if(top<=bottom){
                for(i=right;i>=left;i--){
                    ans.emplace_back(matrix[bottom][i]);
                }
                bottom--;
            }
            if(left<=right){
                for(i=bottom;i>=top;i--){
                    ans.emplace_back(matrix[i][left]);
                }
                left++;
            }
        }
        return ans;
    }
    };