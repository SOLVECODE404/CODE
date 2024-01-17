
class Solution
{
public:
    ListNode *mergeTwoLists(ListNode *a, ListNode *b)
    {

        // First method 

        // ListNode *tempa = list1;
        // ListNode *tempb = list2;
        // ListNode *c = new ListNode(100);
        // ListNode *tempc = c;
        // while (tempa != NULL && tempb != NULL)
        // {
        //     if (tempa->val <= tempb->val)
        //     {
        //         ListNode *t = new ListNode(tempa->val);
        //         tempc->next = t;
        //         tempc = t;
        //         tempa = tempa->next;
        //     }
        //     else
        //     {
        //         ListNode *t = new ListNode(tempb->val);
        //         tempc->next = t;
        //         tempc = t;
        //         tempb = tempb->next;
        //     }}
        //     if (tempa == NULL)
        //     {
        //         tempc->next = tempb;
        //     }
        //     else
        //     {
        //         tempc->next = tempa;
        //     }
        //     return c->next;

        // second method
        ListNode *c=new ListNode(100);
        ListNode *tempc=c;
        while(a!=NULL && b!=NULL){
            if(a->val<=b->val){
                tempc->next=a;
                a=a->next;
                tempc=tempc->next;
            }
            else{
                tempc->next = b;
                b = b->next;
                tempc = tempc->next;
            }
        }
        if(a==NULL)tempc->next=b;
        else tempc->next=a;
        return c->next;
    }
};
// @lc code=end
