class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans=strs[0];
        bool m=false;
        string temp="";
        for(int i=1;i<strs.size();i++){
            temp="";
            for(int j=0;j<strs[i].length();j++){
                string first=strs[i];
                if(first[j]==ans[j]){
                    temp+=first[j];
                }
                else{
                    ans=temp;
                    break;
                    m=true;
                }
            }
        }
        if(ans==strs[strs.size()-1]){
            return ans;
        }
        return temp;
    }
};