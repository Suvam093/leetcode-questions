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

int getlen(ListNode* head){
    int len = 0; 
    ListNode* temp = head;
    while(temp != NULL){
        len++;
        temp = temp -> next;
    }
    return len;
}





class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(head == NULL) return head;
        if(head -> next == NULL) return head;

        ListNode* prev = NULL;
        ListNode* curr = head;
        ListNode* nextnode = curr -> next;
        int pos = 0;

        int len = getlen(head);
        if(len<k){
            return head;
        }

        cout<<len<< endl;
        while(pos < k){
            nextnode = curr -> next;
            curr -> next = prev;
            prev = curr;
            curr = nextnode;
            pos++;
        }

        ListNode* recursionkaans = NULL;
        if(nextnode != NULL){
            recursionkaans = reverseKGroup(nextnode, k);
            head -> next = recursionkaans;       // yahan change krna ha abhi
        }
        return prev;
    }
};