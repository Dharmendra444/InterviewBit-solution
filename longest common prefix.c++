string Solution::longestCommonPrefix(vector<string> &v) {
    string s="",t=v[0];
    s=v[0];
    //vector<string>::iterator i;
    for(int i=1;i<v.size();i++){
        s=t;
        t="";
        int len=min(s.length(),v[i].length());
        for(int j=0;j<len;j++){
            if(s[j]!=v[i][j]) break;
            t+=v[i][j];
        }
    }
    s=t;
 return s;
}

