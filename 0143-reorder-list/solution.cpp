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
    void reorderList(ListNode* head) {
        if(head == NULL || head->next == NULL){
            return;
        }
        ListNode* slow = head ;
        ListNode* fast = head;
        //find the middle of the linked list 
        while(fast->next != NULL && fast->next->next != NULL){
            slow = slow->next;
            fast = fast->next->next;
        }

        ListNode* second = slow->next;
        slow->next = NULL;

        //reverse the second list
        ListNode* prev = NULL;
        while(second != NULL){
            ListNode* next = second->next;
            second->next = prev;
            prev = second;
            second = next;
        }

        second = prev;

        // lets merge them now 
        ListNode* first = head;
        while(second != NULL ){
            ListNode* temp1 = first->next;
            ListNode* temp2 = second ->next;
            first->next = second;
            second->next = temp1;

            first = temp1;
            second = temp2;
        }
    }
};