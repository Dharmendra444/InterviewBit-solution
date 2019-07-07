/**iven a linked list, return the node where the cycle begins. If there is no cycle, return null.

Try solving it using constant additional space.

Example :

Input : 

                  ______
                 |     |
                 \/    |
        1 -> 2 -> 3 -> 4

Return the node corresponding to node 3. 
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::detectCycle(ListNode* head) {
    
    if(!head or !head->next) return NULL;
    ListNode *slow=head,*fast=head;
    
    while(fast &&fast->next){
        slow=slow->next;
        if(fast->next==NULL) return NULL;
        fast=(fast->next)->next;
        if(slow==fast) break;
        
        
    }
    
    if(slow==fast){
    slow=head;
    while(slow!=fast){
        slow=slow->next;
        fast=fast->next;
    }
    return slow;
    }
    return NULL;
    
}

