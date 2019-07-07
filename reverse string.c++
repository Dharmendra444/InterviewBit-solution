void Solution::reverseWords(string &s) {
    string t;
    string u;
    for(int i=0;i<s.length();i++){
        if(s[i]==' '){
        t=u+t;
        u="";
         t=' '+t;
        }
        else u+=s[i];
    }
    if(u!=" ") t=u+t;
    s=t;
}

