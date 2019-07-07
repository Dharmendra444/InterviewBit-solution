/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::removeNthFromEnd(ListNode* A, int B) {
    
    if(!A||B==0) return A;
    
    ListNode *temp=A;
    int count=0;
    while(temp){
        count++;
        temp=temp->next;
    }
    
    if(B>=count) return A->next;
    count=count-B-1;
    
    temp=A;
    while(count--){
        //cout<<temp->val;
        temp=temp->next;
    }
    if(temp->next)
    temp->next=temp->next->next;
    //else temp->next=NULL;
    
    return A;
}

