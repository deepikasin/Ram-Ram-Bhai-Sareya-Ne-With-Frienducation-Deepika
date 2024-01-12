bool isAnagram(string s, string t) {
        int count1[26]={0};
        int count2[26]={0};
        for(int i=0;i<s.length();i++){
            int index=s[i]-'a';
            count1[index]++;
        }
        for(int i=0;i<t.length();i++){
            int index_=t[i]-'a';
            count2[index_]++;
        }
        for(int i=0;i<26;i++){
            
            if(count1[i]!=count2[i]){
                return 0;
            }
        }
        return 1;
    }
    //TC=O(N)
    //SC=O(1)