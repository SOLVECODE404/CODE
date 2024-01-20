
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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if(left==right)return head;
        ListNode *temp=head;
        int n=1;
        ListNode*a=NULL;
        ListNode*b=NULL;
        ListNode*c=NULL;
        ListNode*d=NULL;
        while(temp){
            if(n==left-1)a=temp;
            if(n==left)b=temp;
            if(n==right)c=temp;
            if(n==right+1)d=temp;
            temp=temp->next;
            n++;
        }
        if(a)a->next=NULL;
        c->next=NULL;
        c=reverseList(b);
        if(a)a->next=c;
        b->next=d;
        if(a)return head;
        return c;
    }
};
// @lc code=end

