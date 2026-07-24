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
class compare{
public:
    bool operator()(ListNode*a,ListNode* b){
        return a->val > b->val;
    }
};
class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        priority_queue<ListNode* , vector<ListNode*>, compare> minHeap;

        //step1
        int k = lists.size();
        for(int i=0;i<k;i++){
            if(lists[i] != NULL){
                minHeap.push(lists[i]);
            }
        }

        //step2
        ListNode* head = NULL;
        ListNode* tail = NULL;
        while(minHeap.size()>0){
            ListNode* top = minHeap.top();
            minHeap.pop();
            if(head == NULL){
                head = top;
                tail = top;
                if(head->next != NULL){
                    minHeap.push(head->next);
                }
            }
            else{
                tail->next = top;
                tail = top;
                if(tail->next != NULL){
                    minHeap.push(tail->next);
                }
            }
        }
        return head;

    }
};