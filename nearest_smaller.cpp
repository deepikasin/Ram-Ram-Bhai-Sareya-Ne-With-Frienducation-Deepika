int* prevSmaller(int* A, int n1, int *len1) {
    stack<int>st;
    st.push(-1);
    int *ans=new int[len1];
    for(int i=0;i<len1;i++){
        if(i==0){
            ans[i]=-1;
            st.push(A[i]);
        }
        else if(A[i]>st.top()){
            ans[i]=st.top();
        }
        else{
            while(st.top()>A[i]){
                st.pop();
            }
            ans[i]=st.top();
            st.push(A[i]);
        }
    }
    return ans;
    
}