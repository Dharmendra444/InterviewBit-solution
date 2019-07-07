vector<int> Solution::getRow(int n) {
    
    vector<vector<int>>v(n+1);
    vector<int>u;
    u.push_back(1);
    v[0]=u;
    
    for(int i=1;i<=n;i++){
        vector<int>t;
        t.push_back(1);
        for(int j=1;j<i;j++){
            t.push_back(v[i-1][j]+v[i-1][j-1]);
        }
        
        t.push_back(1);
        v[i]=t;
    }
    
    return v[n];
}

