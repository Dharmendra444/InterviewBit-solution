string Solution::convertToTitle(int n) {
    string s;
    while(n>0){
        int rem=n%26;
        if(rem==0){
            s='Z'+s;
            n=n/26-1;
        }
        
        else{
            s=char((n-1)%26+'A')+s;
            n=n/26;
        }
    }
    return s;
}

