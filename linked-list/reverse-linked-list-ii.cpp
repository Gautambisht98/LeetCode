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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
           ListNode* prev=NULL;
        ListNode* curr=head;
        ListNode* next=NULL;

        while(curr!=NULL){
            for(int i=0;i<500;i++){
            if(curr[i]>=left && curr[i]<=right){
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
            }
            }
        }
         return prev;
    }
};