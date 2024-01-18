int trap(vector<int>& height) {
        int sum=0;
        int maxleft=height[0];
        int maxright=height[height.size()-1];
        vector<int>left(height.size());
        left[0]=maxleft;
        vector<int>right(height.size());
        right[height.size()-1]=maxright;
        
        for(int i=1;i<height.size();i++){
            maxleft=max(maxleft,height[i]);
            left[i]=maxleft;
        }
        for(int i=height.size()-2;i>=0;i--){
            maxright=max(maxright,height[i]);
            right[i]=maxright;
        }
        vector<int>ans(height.size());
        for(int i=0;i<height.size();i++){
            ans[i]=min(left[i],right[i]) - height[i];
        }
        for(int i=0;i<ans.size();i++){
            sum+=ans[i];
        }
        return sum;
    }