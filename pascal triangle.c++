vector<vector<int> > Solution::solve(int n) {
    vector<vector<int>>v(n);
    vector<int>u;
    if(n==0) return v;
    u.push_back(1);
    v[0]=u;
    //if(n==1) return v;

    
    for(int i=1;i<n;i++){
        vector<int>t;
        t.push_back(1);
        for(int j=1;j<i;j++){
            if(i!=1)
            t.push_back(v[i-1][j]+v[i-1][j-1]);
        }
        t.push_back(1);
        
        v[i]=t;
        
    }
    
    return v;
}

