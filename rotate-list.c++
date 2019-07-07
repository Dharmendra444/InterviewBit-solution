/**
 *Given a list, rotate the list to the right by k places, where k is non-negative.

For example:

Given 1->2->3->4->5->NULL and k = 2,
return 4->5->1->2->3->NULL.
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::rotateRight(ListNode* A, int B) {
    if(!A or B==0) return A;
    
    ListNode* temp=A;
    int count=0;
    while(temp){
        count++;
        temp=temp->next;
    }
    
    B=B%count;
    if(B==0) return A;
    
    count=count-B-1;
    
    temp=A;
    while(count--){
        
        temp=temp->next;
    }
    
    ListNode* p=temp->next;
    
    temp->next=NULL;
    temp=p;
    
    while(p->next) p=p->next;
    
    p->next=A;
    A=temp;
    return A;
}

