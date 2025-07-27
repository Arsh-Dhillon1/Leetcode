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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head==nullptr || head->next== nullptr ) return nullptr;
        ListNode* start=head;
        ListNode* prev=nullptr;
        ListNode* fast=head;
        int count=0;
        while(fast!=nullptr){
            count++;
            fast=fast->next;
        }
        for(int i=0;i<count-n;i++){
            prev=start;
            start=start->next;
        }
        prev->next=start->next;
        return head;
    }
};