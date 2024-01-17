
class Solution
{
public:
    ListNode *middleNode(ListNode *head)
    {
        // first method

        //     int len=0;
        //     ListNode *temp=head;
        //     while(temp!=NULL){
        //         len++;
        //         temp=temp->next;
        //     }
        //     int mididx=len/2;
        //     ListNode* mid=head;
        //     for(int i=1;i<=mididx;i++){
        //         mid=mid->next;
        //     }
        //     return mid;

        // /second method

        ListNode *slow = head;
        ListNode *fast = head;
        while (fast!=NULL && fast->next!= NULL) //even left middle to find we shuld write the considtion in while loop fast next next not equal to null
        {
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }

};
// @lc code=end
