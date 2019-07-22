vector<int> Solution::prevSmaller(vector<int> &A) {
    stack<int>st;
    vector<int>ans;
    for(int i=0;i<A.size();i++){
        //st.push(A[i]);
        if(st.size()==0) ans.push_back(-1);
        
        else {
            while(!st.empty() and st.top()>=A[i]){
                st.pop();
            }
             //st.push(A[i]);
            if(st.size()==0) ans.push_back(-1);
            else ans.push_back(st.top());
            
        }
        st.push(A[i]);
    }
    return ans;
}

