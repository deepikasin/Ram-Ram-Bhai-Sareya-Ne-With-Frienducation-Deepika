class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode*curr=head;
        ListNode*nex=NULL;
        ListNode*prev=NULL;
        while(curr!=NULL){
            nex=curr->next;
            curr->next=prev;
            prev=curr;
            curr=nex;
        }
        return prev;
    }
};
//TC=O(N)