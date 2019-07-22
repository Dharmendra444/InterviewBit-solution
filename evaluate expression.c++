int Solution::evalRPN(vector<string> &s) {
   stack<int>st;
   
   for(int i=0;i<s.size();i++){
       if(s[i]=="/" or s[i]=="*" or s[i]=="-" or s[i]=="+"){
           if(st.size()>=2){
               int x=st.top();
               st.pop();
               int y=st.top();
               st.pop();
               if(s[i]=="/") st.push(y/x);
               else if(s[i]=="*") st.push(x*y);
               else if(s[i]=="+") st.push(x+y);
               else st.push(y-x);
           }
       }
       
       else  st.push(stoi(s[i]));
   }
   
   return st.top();
}

