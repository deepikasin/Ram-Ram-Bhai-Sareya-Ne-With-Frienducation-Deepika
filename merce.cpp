class Solution {
private:
    ListNode* solve(ListNode* &head1, ListNode* &head2) {
        ListNode*temp=head1->next;
        while(temp!=NULL && head2!=NULL){
            if(temp->val<=head2->val){
                head1->next=temp;
                temp=temp->next;
            }
            else{
                head1->next=head2;
                head2=head2->next;
            }
        }
        while(temp!=NULL){
            head1->next=temp;
            temp=temp->next;
        }
        while(head2!=NULL){
            head1->next=head2;
            head2=head2->next;

        }
        return head1;
    }    
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* head1=list1;
        ListNode* head2=list2;
        if(head1==NULL && head2==NULL){
            return head1;
        }
        if(head1==NULL){
            return head2;
        }
        if(head2==NULL){
            return head1;
        }
        if(head1->val<head2->val){ 
            return solve(head1,head2);
        }
        else{
            return solve(head2,head1);
        }
        
    }
};