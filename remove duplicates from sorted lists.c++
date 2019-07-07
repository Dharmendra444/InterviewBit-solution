/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::deleteDuplicates(ListNode* head) {
    if(!head or !head->next) return head;
    
    ListNode* p=head,*q=head->next;
    
    while(q){
        if(p->val==q->val)
            q=q->next;
        else{
            p->next=q;
            p=q;
            q=q->next;
        }
    }
    p->next=q;
    
    return head;
}

