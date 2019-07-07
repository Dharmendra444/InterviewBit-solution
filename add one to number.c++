vector<int> Solution::plusOne(vector<int> &A) {
    int x=1,y,j;
    vector<int>v;
    
    while(A[0]==0 and A.size()>1) A.erase(A.begin());
    for(int i=A.size()-1;i>=0;i--){
        y=(A[i]+x);
        if(y>9){
            A[i]=y%10;
            x=1;
        }
        
        else {A[i]=y%10;return A;}
        
        //if(x==0) return A;
    }
    //if(x==1)
    //  if(x==0) return A;   

    if(x==1)
    v.push_back(1);
    
    for( int i=j;i<A.size();i++)
        v.push_back(A[i]);
    
    
    return v;
    
    //eturn A;
}

