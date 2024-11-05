/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head == NULL) return head;
        ListNode* curr = head;
        ListNode* prev = head;
        ListNode* temp = prev;

        int l = 1;

        while(curr -> next != NULL){
            curr = curr -> next;
            l++; 
            if(l>n+1){
                prev = prev -> next;
            }
            if(l>n){
                temp = prev -> next;
            }
            
            
        }
        if(l==n){
            head = head -> next;
            delete temp;
        }
        else {
            prev -> next = temp -> next;
            temp -> next = NULL;
            delete temp;
        }
        return head;
    }
};