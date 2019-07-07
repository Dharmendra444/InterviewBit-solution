int Solution::solve(vector<int> &arr) {
    sort(arr.begin(),arr.end());
    int n=arr.size()-1;
    for(int i=0;i<n;i++){
        if(arr[i]==arr[i+1]) continue;
        if(arr[i]==n-i) return 1;
    }
    if(arr[n]==0) return 1;
    return -1;    
    
}

