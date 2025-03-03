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
    ListNode* oddEvenList(ListNode* head) {
        if ( head == nullptr || head->next ==nullptr || head->next->next ==nullptr) return head;
        
        ListNode* evenHead = head->next;
        ListNode* t1 = head;
        ListNode* t2 = head->next;
        
        while( t2 != nullptr && t2->next != nullptr){
            t1->next = t1->next->next;
            t2->next = t2->next->next;
            t1 = t1->next;
            t2 = t2->next;
        }
        t1->next = evenHead;
        return head;
    }
};
