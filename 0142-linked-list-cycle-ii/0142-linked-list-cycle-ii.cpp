/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        if(head == NULL) return NULL;
        if(head -> next == NULL) return NULL;

        int pos = 0;

        ListNode* fast = head;
        ListNode* slow = head;

        while(fast!= NULL){
            fast = fast -> next; 
            if(fast != NULL){
                fast = fast -> next;
                slow = slow -> next;
            }
            if(fast == slow){
                break;
            }
        }
        if(fast == NULL){
            return NULL;
        }
        slow = head;
        while(slow != fast){
            slow = slow -> next;
            fast = fast -> next;
            pos++;
        }
        return slow;
    }
};