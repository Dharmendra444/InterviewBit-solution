string Solution::findDigitsInBinary(int n) {
    if(n==0) return "0";
    if(n==1) return "1";
    string s;
    while(n){
        s=to_string(n%2)+s;
        n=n/2;
    }
    return s;
}

