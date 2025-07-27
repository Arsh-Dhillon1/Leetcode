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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        if(l1 == nullptr) return l2;
        if(l2 == nullptr) return l1;

        ListNode* node = new ListNode(-1);
        ListNode* newNode = node;

        while(l1 != nullptr && l2 != nullptr) {
            if(l1->val <= l2->val) {
                newNode->next = l1;
                l1 = l1->next;
            } else {
                newNode->next = l2;
                l2 = l2->next;
            }
            newNode = newNode->next;
        }

        if(l1 != nullptr) newNode->next = l1;
        if(l2 != nullptr) newNode->next = l2;

        return node->next;
    }

    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if (lists.size() == 0) return nullptr;

        ListNode* node = nullptr;

        for(int i = 0; i < lists.size(); i++) {
            node = mergeTwoLists(node, lists[i]);
        }

        return node;
    }
};
