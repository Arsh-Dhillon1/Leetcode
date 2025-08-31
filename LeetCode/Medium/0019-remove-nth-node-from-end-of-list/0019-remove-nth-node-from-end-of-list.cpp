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
        ListNode* len=head;
        int count=1;
        if(head==nullptr || head->next==nullptr) return nullptr;
        while(len!=nullptr && len->next!=nullptr){
            count++;
            len=len->next;
        }
        if(count==n) return head->next;
        int length=count-n;
        ListNode* start=head;
        for(int i=0;i<length-1;i++){
            start=start->next;
        }
        start->next=start->next->next;
        return head;
    }
};