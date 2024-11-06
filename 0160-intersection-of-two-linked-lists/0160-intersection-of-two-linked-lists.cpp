/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

int lengthofLL (ListNode* head){
    if(head == NULL) return 0;
    ListNode* temp = head;
    int l = 1; 
    while(temp != NULL){
        temp = temp -> next;
        l++;
    }
    return l;
}

class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if(headA == NULL || headB == NULL) return NULL;
        int la = lengthofLL(headA);
        int lb = lengthofLL(headB);
        ListNode* tempa = headA;
        ListNode* tempb = headB;
        int skipA = 1;
        int skipB = 1;

        if(la<lb){

            int c = lb - la;
            int a = 1;
            while(a<=c){
                tempb = tempb -> next;
                skipB++;
                a++;
            }
            while(tempa != NULL){
                if(tempa == tempb) break;
                tempa = tempa -> next;
                tempb = tempb -> next;
                skipA++;
                skipB++;
               
            }


        }
        else if(la>lb) {
            int c = la - lb;
            int a = 1;
            while(a<=c){
                tempa = tempa -> next;
                a++;
                skipA++;
            }
            while(tempa != NULL){
                if(tempa == tempb) break;
                tempa = tempa -> next;
                tempb = tempb -> next;
                skipA++;
                skipB++;
                
            }

        }
        else{
            while(tempa != NULL){
                if(tempa == tempb) break;
                tempa = tempa -> next;
                tempb = tempb -> next;
                skipA++;
                skipB++;
                
            }
        }
        if(tempa != tempb) return NULL;
        return tempa;
        

    }
};