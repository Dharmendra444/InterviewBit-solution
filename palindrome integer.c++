int Solution::isPalindrome(int n) {
    string s=to_string(n);
    string t=s;
    reverse(s.begin(),s.end());
    if(s==t) return 1;
    return 0;
}

