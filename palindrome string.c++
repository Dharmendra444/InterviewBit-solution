bool palindrome(string s){
    int j=s.length()-1;
    int i=0;
    while(i<j){
        if(s[i]!=s[j]) return 0;
        i++;j--;
    }
    return 1;
}

int Solution::isPalindrome(string s) {
    string x;
    //cout<<s.length()<<endl;
    for(int i=0;i<s.length();i++){
        if(isupper(s[i])) x+=(s[i]+32);
        else if(islower(s[i]) or isdigit(s[i])) x+=s[i];
    }
    //cout<<x<<endl;
    bool a=palindrome(x);
    if(a==0) return 0;
    return 1;
}

