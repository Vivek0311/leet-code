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
    bool isPalindrome(ListNode* head) {
        if ( head == nullptr) return false;
        if (head->next == nullptr) return true;
        bool flag = false;
        stack<int> st;
        ListNode* temp = head;
        while( temp != nullptr){
            st.push(temp->val);
            temp = temp->next;
        }
        ListNode* temp2 = head;
        while( temp2 != nullptr ){
            if ( st.top() == temp2->val ){
                st.pop();
            }
            else{
                return false;
            }
            temp2 = temp2->next;
        }
        if (st.empty()) {
            flag = true;
        }
        return flag;
    }
};
