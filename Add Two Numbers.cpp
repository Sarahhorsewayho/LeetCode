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
        int lend = 0;
        ListNode *res = NULL;
        ListNode **node = &res;
        while (l1 != NULL || l2 != NULL || lend > 0) {
            int temp = 0;
            temp += lend;
            if (l1 != NULL) {
                temp += l1 -> val;
                l1 = l1 -> next;
            }
            if (l2 != NULL) {
                temp += l2 -> val;
                l2 = l2 -> next;
            }
            lend = temp / 10;
            temp %= 10;
            (*node) = new ListNode(temp);
            node = &((*node) -> next);
        }
        return res;
    }
};