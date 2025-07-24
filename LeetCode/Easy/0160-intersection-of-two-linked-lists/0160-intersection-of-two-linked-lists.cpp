class Solution {
public:
    int getLength(ListNode* head) {
        int len = 0;
        while (head != nullptr) {
            len++;
            head = head->next;
        }
        return len;
    }

    ListNode* getIntersectionNode(ListNode* headA, ListNode* headB) {
        int lenA = getLength(headA);
        int lenB = getLength(headB);

        // Skip nodes in longer list
        while (lenA > lenB) {
            headA = headA->next;
            lenA--;
        }
        while (lenB > lenA) {
            headB = headB->next;
            lenB--;
        }

        // Now both lists have same remaining length
        while (headA != nullptr && headB != nullptr) {
            if (headA == headB) {
                return headA;  // Intersection point
            }
            headA = headA->next;
            headB = headB->next;
        }

        return nullptr;  // No intersection
    }
};
