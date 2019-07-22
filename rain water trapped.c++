int Solution::trap(const vector<int> &A) {
    //if(A.size()==0) return 0;
    int mx=A[0];
    int n=A.size();
    vector<int>ans;
    for(int i=0;i<n;i++){
        mx=max(mx,A[i]);
        ans.push_back(mx);
    }
    mx=A[n-1];
    for(int i=n-1;i>=0;i--){
        mx=max(mx,A[i]);
        ans[i]=min(ans[i],mx);
    }
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=ans[i]-A[i];
    }
    return sum;
}

