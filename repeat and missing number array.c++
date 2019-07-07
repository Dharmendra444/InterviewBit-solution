vector<int> Solution::repeatedNumber(const vector<int> &v) {
    vector<int>t;
    long long sqr=0,sum=0,a,b,c,d=v.size();
    //a=v.size()*(v.size()+1)/2;
    for(long long i=0;i<v.size();i++){
        sum+=v[i]-(i+1);
        sqr+=(long long )(pow(v[i],2))-(long long)(pow(i+1,2));
    }
    
    // b=sum-a;
    // c=sqr-(d*(d+1)*(2*d+1)/6);
    int repeat=(sum+sqr/sum)/2;
    int miss=sqr/sum-repeat;
   // v.clear();
    t.push_back(repeat);
    t.push_back(miss);
    return t;
}

