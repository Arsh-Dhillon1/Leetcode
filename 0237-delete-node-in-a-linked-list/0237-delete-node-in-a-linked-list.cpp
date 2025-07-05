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
    void deleteNode(ListNode* node) {
        ListNode* prevnode=NULL;
        while(node!=NULL && node->next!=nullptr){
            prevnode=node;
            node->val=node->next->val;
            node=node->next;
        }
        prevnode->next=NULL;
        delete(node);
    }
};