vector<int> Solution::sieve(int n) {
    vector<int>v;
    
    int arr[n+1];
    for(int i=2;i<=n;i++)
        arr[i]=1;
        
    for(int i=2;i<=n;i++){
        if(arr[i]){
            for(int j=2;i*j<=n;j++)
                arr[i*j]=0;
        }
    }
    
    for(int i=2;i<=n;i++)
        if(arr[i]==1) v.push_back(i);
        
    return v;    
}

