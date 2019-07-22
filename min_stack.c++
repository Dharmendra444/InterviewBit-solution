 stack<int>st;
 stack<int>mn;
MinStack::MinStack() {
   while(!st.empty())
    st.pop();
    
    while(!mn.empty())
        mn.pop();
}


void MinStack::push(int x) {
    st.push(x);
    if(mn.size()==0) mn.push(x);
    
    else{
        
     if(x<=mn.top()) mn.push(x);
     
     else mn.push(mn.top());
}
}
void MinStack::pop() {
    if(st.size()!=0 and mn.size()!=0){
    st.pop();
    mn.pop();
    
    }
}

int MinStack::top() {
    if(st.size()==0) return -1;
    return st.top();
}

int MinStack::getMin() {
    if(mn.size()==0) return -1;
    return mn.top();
}


