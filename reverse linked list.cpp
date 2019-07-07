/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::reverseList(ListNode* head) {
    if(!head or !head->next) return head;
    ListNode* temp=head,*p=head->next,*q=head->next->next;
    while(p->next){
        p->next=temp;
        temp=p;
        p=q;
        q=q->next;
    }
    if(p) p->next=temp;
    head->next=NULL;
    head=p;
    return head;
}

