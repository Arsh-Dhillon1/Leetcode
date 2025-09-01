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
    int findLength(ListNode* start){
        int len=0;
        while(start!=nullptr){
            len++;
            start=start->next;
        }
        return len;
    }
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int a=findLength(headA);
        int b=findLength(headB);
        int diff=0;
        // if(headA==nullptr) return headB;  
        // if(headB==nullptr) return headB;  
        if(a>b){
            diff=a-b;
            for(int i=0;i<diff;i++){
                headA=headA->next;
            }
        }
        else{
            diff=b-a;
            for(int i=0;i<diff;i++){
                headB=headB->next;
            }
            
        }
        while(headA!=nullptr && headB!=nullptr){
            if(headA==headB){
                return headA;
            }
            else{
                headA=headA->next;
                headB=headB->next;
            }
        }
        return nullptr;
    }
};