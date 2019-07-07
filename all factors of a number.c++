vector<int> Solution::allFactors(int a) {
    vector<int>v;
    if(a==0){ v.push_back(a); return v;}
    for(int i=1;i<=sqrt(a);i++){
        if(a%i==0){ v.push_back(i); if(i!=sqrt(a)) v.push_back(a/i);}
    
}
sort(v.begin(),v.end());
return v;
}
