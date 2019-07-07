int Solution::titleToNumber(string s) {
    //reverse(s.begin(),s.end());
    string t;
    for(int i=0;i<s.length();i++){
        if(!isupper(s[i])) break;
        else t=s[i]+t;
    }
    
    int sum=0;
    for(int i=0;i<t.length();i++){
        sum+=(int)(t[i]-64)*(int)pow(26,i);
    }
    
    return sum;
}

