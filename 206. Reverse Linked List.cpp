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
    ListNode* reverseList(ListNode* head) {
        if ( head == nullptr || head->next == nullptr) return head;
        ListNode* curr = head;
        ListNode* fut = head->next;
        ListNode* prev = nullptr;
        while( fut != nullptr){
            curr->next = prev;
            prev = curr;
            curr = fut;
            fut = fut->next;
        }
        curr->next = prev;
        head = curr;
        delete fut;
        return head;
    }
};
