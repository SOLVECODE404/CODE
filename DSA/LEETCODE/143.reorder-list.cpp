class Solution {
public:
    ListNode *reverseList(ListNode *head)
    {
        if (head == NULL || head->next == NULL)
            return head;
        ListNode *newhead = reverseList(head->next);
        head->next->next = head;
        head->next = NULL;
        return newhead;
    }
    void reorderList(ListNode* head) {
        ListNode *slow=head,*fast=head;
        while(fast->next!=NULL && fast->next->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
    ListNode *b=reverseList(slow->next);
    ListNode *a=head;
    slow->next=NULL;
    ListNode *c=new ListNode(100);
    ListNode *tempc=c;
    ListNode *tempa=a;
    ListNode *tempb=b;
    while(tempa && tempb){
        tempc->next=tempa;
        tempa=tempa->next;
        tempc=tempc->next;
        tempc->next=tempb;
        tempb=tempb->next;
        tempc=tempc->next;
    }
    tempc->next=tempa;
    head= c->next;
    }
};
// @lc code=end

