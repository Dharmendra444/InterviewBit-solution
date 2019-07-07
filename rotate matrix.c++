void Solution::rotate(vector<vector<int> > &arr) {
   int n=arr[0].size()-1;
   //cout<<n<<endl;
  for(int i=0;i<(n+1)/2;i++)
      for(int j=0;j<=n;j++)
          swap(arr[i][j],arr[n-i][j]);
       
   
   for(int i=0;i<=n;i++)
       for(int j=i+1;j<=n;j++)
           swap(arr[j][i],arr[i][j]);
       
   
   
}

