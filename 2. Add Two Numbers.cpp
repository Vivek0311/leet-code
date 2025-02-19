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
            ListNode* result = new ListNode(0);
            ListNode* head = result;
            int carry = 0;
    
            while(l1 != nullptr && l2 != nullptr){
                int value = l1->val + l2->val + carry;
                carry = value / 10;
                result->next = new ListNode(value % 10);
                l1 = l1->next;
                l2 = l2->next;
                result = result->next;
            }
            while(l1){
                int value = l1->val + carry;
                carry = value / 10;
                result->next = new ListNode(value % 10);
                l1 = l1->next;
                result = result->next;
            }
            while(l2){
                int value = l2->val + carry;
                carry = value / 10;
                result->next = new ListNode(value % 10);
                l2 = l2->next;
                result = result->next;
            }
            if (carry){
                result->next = new ListNode(carry);
            }
            return head->next;
        }
    };