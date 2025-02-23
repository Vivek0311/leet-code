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
 #include<math.h>
class Solution {
public:
    int getDecimalValue(ListNode* head) {
        ListNode* temp = head;
        stack<int> st;
        int decimal = 0;
        while( temp != nullptr ){
            st.push(temp->val);
            temp = temp->next;
        }
        int counter = 0;
        while( !st.empty()){
            decimal +=  (st.top() * pow(2,counter));
            st.pop();
            counter++;
        }
        return decimal;
    }
};
