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
    ListNode* partition(ListNode* head, int x) {
        ListNode* start=NULL;
        ListNode* end=NULL;
        ListNode* afterend=NULL;
        ListNode* afterstart=NULL;
        ListNode* temp=head;
        while(temp!=NULL){
            ListNode* nextPtr=temp->next;
            temp->next=NULL;
            if(temp->val < x){
                if(start==NULL){
                    start=end=temp;
                }
                else{
                    end->next=temp;
                    end=temp;
                }
            }
            else{
                if(afterstart==NULL){
                    afterstart=afterend=temp;
                }
                else{
                    afterend->next=temp;
                    afterend=temp;
                }
            }
            temp=nextPtr;
        }
        if(start==NULL){
            return afterstart;
        }
        end->next=afterstart;
        return start;
    }
};