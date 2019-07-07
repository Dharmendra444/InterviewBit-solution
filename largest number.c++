bool compare(int a,int b){
    string x=to_string(a);
    string y=to_string(b);
    
    return (x+y)>=(y+x);
}
string Solution::largestNumber(const vector<int> &a) {
    if(a.size()==0) return "";
    vector<int>v;
    for(auto i=a.begin();i!=a.end();i++)
        v.push_back(*i);
        
        sort(v.begin(),v.end(),compare);
        string s;
        int flag=0;
        for(auto i=v.begin();i!=v.end();i++){
            if(*i==0){
                if(flag==1)
                    s+=to_string(*i);
            }
            else {
                s+=to_string(*i);
                flag=1;
            }    
        }
        if(flag==0) s+='0';
    return s;
}

