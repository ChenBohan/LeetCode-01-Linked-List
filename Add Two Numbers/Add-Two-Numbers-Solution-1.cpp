/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *p1 = l1;
        ListNode *p2 = l2;
        ListNode *result = new ListNode(0);
        ListNode *p = result;
        int carry = 0;
        while (p1 || p2){
            int val1 = p1 ? p1->val : 0;
            int val2 = p2 ? p2->val : 0;
            int sum = val1 + val2 + carry;
            carry = sum / 10;
            p->next = new ListNode(sum % 10);
            p = p->next;
            p1 = p1 ? p1->next : p1;
            p2 = p2 ? p2->next : p2;
        }
        if (carry >0){
            p->next = new ListNode(carry);
        }
        return result->next;
        }
};