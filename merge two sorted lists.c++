/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::mergeTwoLists(ListNode* head1, ListNode* head2) {
    if(!head1) return head2;
    if(!head2) return head1;
    ListNode* p=head1,*q=head2;
    int x;
    if(p->val<=q->val){ x=p->val; p=p->next;}
    else{ x=q->val; q=q->next;}
    ListNode* temp=new ListNode(x);
    ListNode* s=temp;
    while(q and p){
       if(p->val<=q->val){ x=p->val; p=p->next;}
        else{ x=q->val; q=q->next;}
        ListNode* r=new ListNode(x);
        s->next=r;
        s=s->next;
    }
    
    if(!q) s->next=p;
    else if(!p) s->next=q;
    else s->next=NULL;
    
    return temp;
}

