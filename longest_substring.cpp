bool solve(string &s,int i,int j){
        while(i<j){
            if(s[i]!=s[j]){
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
    string longestPalindrome(string s) {
        int n=s.size();
        int st=0;
        int ans=0;
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                if(solve(s,i,j)){
                    if(j-i+1 > ans ){
                        ans=j-i+1;
                        st=i;
                    }
                }
            }
        }
        return s.substr(st,ans);
    }
    //O(N^2)