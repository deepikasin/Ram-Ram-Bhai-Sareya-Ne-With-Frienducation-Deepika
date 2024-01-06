class Solution {
public:
    int removeDuplicates(vector<int>& arr) {
        if(arr.size()==1){
            return 1;
        }
        int u=1;
        for(int i=1;i<arr.size();i++){
            if(arr[i]!=arr[i-1]){
                arr[u++]=arr[i];
            }
        }
        return u;
    }
};
//TC=O(N)
