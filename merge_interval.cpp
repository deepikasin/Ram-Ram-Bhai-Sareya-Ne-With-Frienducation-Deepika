nt j=0;
        if(intervals.size()==0){
            return intervals;
        }
        sort(intervals.begin(),intervals.end());
        vector<vector<int>>result;
        for(int i=1;i<intervals.size();i++){
            if(result[j][1]>=intervals[i][0]){
                result[j][1]=max(result[j][1],intervals[i][1]);
            }
            else{
                j++;
                result.push_back(intervals[i]);
            }
        }
        return result;
    }
    //TC=O(N)