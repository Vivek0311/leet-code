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
    ListNode* removeElements(ListNode* head, int val) {
        // if (head == nullptr) return head;
        // while (head->val == val) {
        //     ListNode* toDelete = head;
        //     head = head->next;
        //     delete toDelete;
        // }
        // ListNode* temp = head;
        // while( temp != nullptr ){
        //     if (temp->next->val == val){
        //         ListNode* toDelete = temp->next;
        //         temp->next = temp->next->next;
        //         delete toDelete;
        //     }
        // }

        if (head == nullptr) return head;
        // if (head->next == nullptr && head->val == val){
        //     ListNode* toDelete = head;
        //     head = head->next;
        //     delete toDelete;
        //     return head;
        // } 
        ListNode* dummy = new ListNode(0); // Create a dummy node to handle edge cases
        dummy->next = head;
        ListNode* prev = dummy;
        ListNode* curr = head;
        
        while(curr != nullptr){
            if (curr->val == val){
                ListNode* toDelete = curr;
                curr = curr->next;
                prev->next = curr;
                delete toDelete;
            }else{
                curr = curr->next;
                prev = prev->next;
            }
        }
        head = dummy->next;
        delete dummy;
        return head;
    }
};
