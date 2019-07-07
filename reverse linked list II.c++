/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::reverseBetween(ListNode* A, int B, int C) {
    if(!A) return A;
    if(B==C) return A;
    
    ListNode* temp=A,*p,*q,*r=NULL,*s;
    int count=0;
    while(count<C and temp){
        int flag=0;
        
        if(B>=2 and count==B-2) r=temp;
        //else if(count==C-1) r=temp;
        if(count>=B and count<C and temp){
            q=temp->next;
            temp->next=p;
            flag=1;
            p=temp;
            if(count<C-1)
            temp=q;
        }
        if(count==B-1){s=temp; p=temp;}
        //if(count==C-1) q=temp;
        count++;
        if(flag==0)
        temp=temp->next;
    }
    
    if(r)
    r->next=temp;
    else A=temp;
    s->next=q;
    return A;
    
}

