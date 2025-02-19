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
    ListNode* deleteDuplicates(ListNode* head) {
        if (head == nullptr || head->next == nullptr) return head;
        ListNode* temp = head;
        ListNode* temp1 = temp->next;
        while(temp1 != nullptr){
            if (temp->val == temp1->val){
                ListNode* toDelete = temp1;
                temp1 = temp1->next;
                temp->next = temp1;
                delete toDelete;
            }
            else{
                temp = temp->next;
                temp1 = temp1->next;
            }

        }
        return head;
    }
};
