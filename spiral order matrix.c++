vector<int> Solution::spiralOrder(const vector<vector<int> > &arr) {
    
    //cout<<arr.size()<<endl;
    int n=arr[0].size();
    int m=arr.size();
    //int a[n][n];
    vector<int>v;
    int left=0,right=n-1,top=0,bottom=m-1;
    int k=(n+1)/2;
    int count=m*n;
    int x=0;
    while(x<k and count>0){
        
        for(int i=left;i<=right;i++){
            v.push_back(arr[top][i]);
            count--;
        }
        top++;
        if(count)
        for(int i=top;i<=bottom;i++){
            v.push_back(arr[i][right]);
            count--;
        }
        right--;
        
        if(count)
        for(int i=right;i>=left;i--){
           v.push_back(arr[bottom][i]);
            count--;
        }
        bottom--;
        
        if(count)
        for(int i=bottom;i>=top;i--){
            v.push_back(arr[i][left]);
            count--;
        }
        left++;
         
         x++;   
    }
    
    
    
    return v;
}

