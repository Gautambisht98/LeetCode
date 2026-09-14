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
    ListNode* middleNode(ListNode* head) {

        ListNode* temp = head;
        int count = 0;
        while (temp != NULL) {
            count++;
            temp = temp->next;
        }
        temp = head;
        for (int i = 0; i < count; i++) {
            if (count % 2 != 0) {
                int mid = 1 + count / 2;
                if (i == mid - 1) {
                    return temp;
                }
                temp = temp->next;
            } else {
                int mid = (1 + count + 1) / 2;
                if (i == mid - 1) {
                    return temp;
                }
                temp = temp->next;
            }
        }
        return NULL;
    }
};