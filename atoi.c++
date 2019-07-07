int Solution::atoi(const string str) {
    
    // string u=to_string(x);
    // string v=to_string(y);
    string s;
    for(int i=0;i<str.length();i++){
        if(s.length()>=11){
                if(s[0]=='-') return INT_MIN;
                return INT_MAX;
            }
        if(isalpha(str[i])){if(s.length()==0) return 0; break;}
        else if((str[i]=='-' or str[i]=='+') and isdigit(str[i+1])) s+=str[i];
        else if(str[i]==' ' and s.length()>0) break;
        else if(!isdigit(str[i])) return 0;
        
        else if(isdigit(str[i])) s+=str[i];
    }
            if(s.length()>=11){
                if(s[0]=='-') return INT_MIN;
                return INT_MAX;
            }
            long long x=INT_MAX;
            long long y=INT_MIN;
            long long z=stoll(s);
            if(z>x) return INT_MAX;
            if(z<y) return INT_MIN;
            return (int)z;
    
    
}

