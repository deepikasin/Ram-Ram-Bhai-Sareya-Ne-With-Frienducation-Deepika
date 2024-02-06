#include <bits/stdc++.h> 
void solve(vector<int>& candidates, int target,int index,vector<int>temp, vector<vector<int>>&ans ){
        if(target==0 ){
            ans.push_back(temp);
        }
        for(int i=index;i<candidates.size();i++){
            temp.push_back(i);
            if(target-candidates[i]>=0){
                solve(candidates,target-candidates[i],i+1,temp,ans);
            }
            temp.pop_back();
        }
    } 
int knapsack(vector<int> weight, vector<int> value, int n, int maxWeight) 
{
	if(n<=1){
		return value[0];
	}
	int maxi=0;
	int sum=0;
	vector<vector<int>>index;
	vector<int> temp;	
	for(int i=0;i<n;i++){
		solve(weight,maxWeight,0,temp,index);
	}
	vector<int> v;
	for(int i=0;i<index.size();i++){
		sum=0;
		for(int j=0;j<index[i].size();j++){
			sum+=value[index[i][j]];
		}
		maxi=max(maxi,sum);
	}
	return maxi;


//TC=O(N2)