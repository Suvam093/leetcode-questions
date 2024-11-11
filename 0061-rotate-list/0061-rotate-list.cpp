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

int getlen( ListNode* head){
    ListNode* temp = head;
    int l =1;

    while(temp -> next != NULL){
        temp = temp-> next;
        l++;
    }
    return l;
}

class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if(head == NULL) return head;
        if(head -> next == NULL) return head;

        int l = getlen(head);
        k = k%l;
        if(k==0 || k==l ) return head;
        ListNode* start = head;
        ListNode* curr = head;
        ListNode* temp = NULL;

        while(l> k+1){
            curr = curr -> next;
            l--;
        }
        temp = curr -> next;
        curr -> next = NULL;
        head = temp;
        while(temp -> next != NULL) 
            temp = temp-> next;
        temp -> next = start;
        return head;
    }
};