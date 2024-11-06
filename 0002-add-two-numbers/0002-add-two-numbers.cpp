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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        if(l1 == 0) return l2;
        if(l2 == 0) return l1;
        
        ListNode* temp1 = l1;
        ListNode* temp2 = l2;
        ListNode* p = temp1;

        int sum = 0; 
        int carry =0;
        while(temp1 != NULL && temp2 != NULL){
            sum = temp1-> val + temp2-> val + carry;
            if(sum>=10) {
                sum = sum%10;
                carry = 1;

            }
            else{
                carry = 0;
            }
            temp1->val = sum;
            p= temp1;
            temp1 = temp1-> next;
            temp2 = temp2-> next;
            
        }
        
        while(temp1 != NULL){
            // temp1-> val = temp1
            sum = temp1-> val + carry;
            if(sum>=10) {
                sum = sum%10;
                carry = 1;

            }
            else{
                carry = 0;
            }
            temp1->val = sum;
            p = temp1;
            temp1 = temp1-> next;
        }

        while(temp2 != NULL){
            // temp1-> val = temp1
            sum = temp2-> val + carry;
            if(sum>=10) {
                sum = sum%10;
                carry = 1;

            }
            else{
                carry = 0;
            }
            ListNode* sumnode = new ListNode(sum);
            p-> next= sumnode;
            p = p -> next;
            temp2 = temp2 -> next;
        }



        if(temp1 == NULL && temp2 == NULL && carry == 1){
            cout<<carry<<endl;
            ListNode* newNode = new ListNode(1);
            p-> next = newNode;
        }
        return l1;
    }
};