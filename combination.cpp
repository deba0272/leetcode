
class Solution {
public:
void sol(int n,int k,vector<vector<int>>&ans,vector<int>&v){
  if(v.size()==k)
        {
         ans.push_back(v);
         return;
        }
        if(n==0)
        {
         return;
        }
         v.push_back(n);
       sol(n-1,k,ans,v);
       v.pop_back();
       sol(n-1,k,ans,v);
}
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> ans;
        vector<int>v;
        sol(n,k,ans,v);
        return ans;
    }
};