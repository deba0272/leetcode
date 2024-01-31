class Solution {
public:
    string multiply(string num1, string num2) {
        string s="";
        if(num1=="0" || num2=="0"){
            return "0";
        }
        vector<int>result(num1.size()+num2.size(),0);
        int i,j;
        for(i=num1.size()-1;i>=0;i--){
            for(j=num2.size()-1;j>=0;j--){
                result[i+j+1]+=(num1[i]-'0')*(num2[j]-'0');
                result[i+j]+=result[i+j+1]/10;
                result[i+j+1]%=10;
                            }
        }
        i=0;
        while(result[i]==0)
        i++;
        while(i<result.size())
        s+=to_string(result[i++]);
        return s;
        }
    
};