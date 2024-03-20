class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {
        //using vector pair
        vector<pair<int,int>>vec;
        int l=arr.size();
        int i,e,d;
        int cnt;
        for(i=0;i<l;i++){
            cnt=0;
            e=arr[i];
            while(e){
            d=e&1;
            cnt+=d;
            e=e>>1;
            }
            vec.push_back({cnt,arr[i]});
        }
        sort(vec.begin(),vec.end());
        vector<int>ans;
        for(auto& it:vec){
        ans.push_back(it.second);
        }
       return ans;
    }
};