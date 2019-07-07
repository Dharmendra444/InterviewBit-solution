/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::getIntersectionNode(ListNode* A, ListNode* B) {
  
while(A != NULL && B != NULL)
{
if(A == B)
return A;
A = A->next;
B = B->next;
}
//return NULL;
}

