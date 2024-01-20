class Solution {
public:
    ListNode* reverseList(ListNode* head) {

        // iterative method ...

        // ListNode *prev=NULL ,*curr=head,*next=head;
        // while(curr){
        //     next=curr->next;
        //     curr->next=prev;
        //     prev=curr;
        //     curr=next;
        // }return prev;

        //recursive method ...
        if(head==NULL || head->next==NULL)return head;
        ListNode *newhead=reverseList(head->next);
        head->next->next=head;
        head->next=NULL;
        return newhead;
    }
};
// @lc code=end

