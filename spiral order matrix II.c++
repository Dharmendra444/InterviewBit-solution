vector<vector<int> > Solution::generateMatrix(int n) {
    int arr[n][n];
    if(n==1) {
         vector<vector<int>>v(n);
         vector<int>u;
         u.push_back(1);
         v[0]=u;
         return v;
    }
    int top=0,bottom=n-1,left=0,right=n-1;
    int k=(n+1)/2;
    int x=1;
    int y=n*n;
    while(k and x<=y){
        
        if(x<=y)
        for(int i=left;i<=right;i++){
            arr[top][i]=x;
            x++;
        }
        top++;
        
        if(x<=y)
        for(int i=top;i<=bottom;i++){
            arr[i][right]=x;
            x++;
        }
        right--;
        
        if(x<=y)
        for(int i=right;i>=left;i--){
            arr[bottom][i]=x;
            x++;
        }
        bottom--;
        
        if(x<=y)
        for(int i=bottom;i>=top;i--){
            arr[i][left]=x;
            x++;
        }
        left++;
        k--;
        
        if(x>y) break;
    }
    
    vector<vector<int>>v(n);
    
    for(int i=0;i<n;i++){
        vector<int>t;
        for(int j=0;j<n;j++){
            t.push_back(arr[i][j]);
        }
        v[i]=t;
    }
    
    return v;
}

