class Solution {
public:
    ListNode* partition(ListNode* head, int x) {
        if (head == nullptr || head->next == nullptr)
            return head;
        ListNode* temp = head;
        ListNode* dummy = new ListNode(-1);
        ListNode* smallptr = dummy;
        while (temp != nullptr) {
            if (temp->val < x) {
                smallptr->next = new ListNode(temp->val); 
                smallptr = smallptr->next;
            }
            temp = temp->next;
        }

        while(head!=nullptr){
            if(head->val>=x){
                smallptr->next=new ListNode(head->val);
                smallptr=smallptr->next;
            }
            head=head->next;
        }
        return dummy->next;
    }
};