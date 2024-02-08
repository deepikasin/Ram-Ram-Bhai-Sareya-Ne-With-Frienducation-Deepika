#include <bits/stdc++.h> 
bool sum(int n, int k, vector<int> &arr,int i){
    if(k==0){
        return 1;
    }
    if(i==n){
        return false;
    }
    
        if(k-arr[i]>=0){
            return sum(n,k-arr[i],arr,i+1)||
             sum(n,k,arr,i+1);
        }
        else
            return sum(n,k,arr,i+1);
}
bool subsetSumToK(int n, int k, vector<int> &arr) {
    return sum(n,k,arr,0);
}
//TC=O(2^N)