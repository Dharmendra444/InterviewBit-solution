vector<string> Solution::fizzBuzz(int n) {
    
    vector<string>arr(n+1,to_string(0));
    
    if(n!=0)
    arr[1]="1";
    for(int i=2;i<=n;i++){
        
        if(arr[i]==to_string(0) and i!=3 and i!=5){
            arr[i]=to_string(i);
            for(int j=2;i*j<=n;j++) arr[i*j]=to_string(i*j);
        }
    }
    int a=3;
    for(int i=1;a*i<=n;i++)
        arr[a*i]="Fizz";
        
    a=5;
    for(int i=1;a*i<=n;i++){
        if(arr[a*i]=="Fizz") arr[a*i]+="Buzz";
        else arr[a*i]="Buzz";
}
auto it=arr.begin();
arr.erase(it);

return arr;
}

