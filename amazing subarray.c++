int Solution::solve(string s) {
    int count=0;
    for(int i=0;i<s.length();i++){
        if((isupper(s[i]) or islower(s[i])) and(s[i]=='a' || s[i]=='e' or s[i]=='i' || s[i]=='o' or s[i]=='u' || s[i]=='A' or s[i]=='E' || s[i]=='I' or s[i]=='O' || s[i]=='U'))
            count=(count+s.length()-i)%10003;
    }
    return count;
}

