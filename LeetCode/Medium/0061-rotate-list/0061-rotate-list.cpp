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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==nullptr || head->next==nullptr) return head;
        ListNode* prev=nullptr;
        ListNode* start=head;
        int len=0;
        ListNode* slow=nullptr;
        ListNode* fast=head;
        while(fast!=nullptr){
            len++;
            slow=fast;
            fast=fast->next;
        }
        k=k%len;
        if(k==0) return head;
        int rotate=len-k;
        for(int i=0;i<rotate;i++){
            prev=start;
            start=start->next;
        }
        prev->next=nullptr;
        slow->next=head;
        return start;
    }
};