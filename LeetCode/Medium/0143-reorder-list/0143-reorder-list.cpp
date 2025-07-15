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
    void reorderList(ListNode* head) {
        ListNode* fast = head;
        ListNode* slow = head;

        while (fast != nullptr && fast->next != nullptr) {
            fast = fast->next->next;
            slow = slow->next;
        }

        ListNode* second = slow->next;
        slow->next = nullptr; // break the list into two halves
        ListNode* prev = nullptr;

        while (second != nullptr) {
            ListNode* ahead = second->next;
            second->next = prev;
            prev = second;
            second = ahead;
        }

        // ListNode* dummy = new ListNode(-1);

        ListNode* dummy = new ListNode(-1);
        ListNode* curr = dummy;

        while (head != nullptr || prev != nullptr) {
            if (head != nullptr) {
                curr->next = head;
                head = head->next;
                curr = curr->next;
            }
            if (prev != nullptr) {
                curr->next = prev;
                prev = prev->next;
                curr = curr->next;
            }
        }
    }
};