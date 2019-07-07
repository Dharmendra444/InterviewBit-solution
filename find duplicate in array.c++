int Solution::repeatedNumber(const vector<int> &A){
    
    if(A.size()==0) return -1;
     //sort(a.begin(),a.end());
    //  int index=0;
    //  int mx=INT_MAX;
    //  int flag=0;
    
       
    
            int slow = A[0];
        int fast = A[A[0]];
        
        while(slow!=fast)
        {
            slow = A[slow];
            fast = A[A[fast]];
        }
        
        slow = 0;
        while(slow!=fast)
        {
            slow = A[slow];
            fast = A[fast];
        }
        
        return slow;

}

