class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        int c=1;
        int p=n*n;
        vector<vector<int>>dp(n,vector<int>(n));
        int i;
        int row=dp.size();
        int col=dp[0].size();
        int left=0;
        int right=col-1;
        int top=0;
        int bottom=row-1;
        while(c<=p){
            for(i=left;i<=right && c<=p;i++){
                dp[top][i]=c;
                c++;
            }
            top++;
            for(i=top;i<=bottom && c<=p;i++){
                dp[i][right]=c;
                c++;
            }
            right--;
            for(i=right;i>=left && c<=p;i--){
                dp[bottom][i]=c;
                c++;
            }
            bottom--;
        for(i=bottom; i>=top && c<=p;i--){
            dp[i][left]=c;
            c++;
        }
        left++;
    }
    return dp;
}
};