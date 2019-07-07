string Solution::countAndSay(int n) {
    if(n==0) return "";
    //if(n==1) return "1";
    int i,j=0, count=0;
    string t="1",s="";
    for(i=1;i<n;i++){
        count=0;
        j=0;
        s=t;
        t="";
        for(j=0;j<s.length()-1;j++){
            if(s[j]!=s[j+1]){
                t+=to_string(count+1);
                t+=s[j];
                count=0;
            }
            else count++;
        }
            
            t+=to_string(count+1);
                //if(j!=0)
                //t+=s[j-1];
                t+=s[j];
        
        
    }
    //if(t!="")
    s=t;
    return s;
    
    
}

