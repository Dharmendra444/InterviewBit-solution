int Solution::lengthOfLastWord(const string s) {
    if(s.length()==0) return 0;
    string t=s;
    reverse(t.begin(),t.end());
    int flag=0;
    int count=0;
    for(int i=0;i<t.length();i++){
        if(t[i]!=' '){ count+=1; flag=1;}
        else if(flag==1) return count;
    }
    return count;
}

