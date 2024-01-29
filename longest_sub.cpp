int lengthOfLongestSubstring(string s) {
        int count=0;
        vector<int>store(50000);
        int maxa=0;
        for(int i=0;i<s.length();i++){
            count=0;
            for(int j=i;j<s.length();j++){
                if( store[s[j]-' '] == 0 ){
                    store[s[j]-' ']++;
                    count++;
                }
                else{
                    maxa=max(maxa,count);
                    for(int i=0;i<store.size();i++){
                        store[i]=0;
                    }
                    count=0;
                    break; 
                }
                maxa=max(maxa,count);
            }   
        }
        maxa=max(maxa,count);
        return maxa;
    }
    //tc=O(n2)