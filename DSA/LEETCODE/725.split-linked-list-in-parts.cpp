class Solution
{
public:
    vector<ListNode *> splitListToParts(ListNode *head, int k)
    {
        ListNode *temp = head;
        int n = 0;
        while (temp)
        {
            temp = temp->next;
            n++;
        }
        vector<ListNode *> ans;
        temp = head;
        int size = n / k;
        int rem = n % k;
        while (temp)
        {
            ListNode *c = new ListNode(100);
            ListNode *tempc = c;
            int s = size;
            if (rem > 0)
                s++;
            rem--;
            for (int i = 1; i <= s; i++)
            {
                tempc->next = temp;
                tempc = tempc->next;
                temp = temp->next;
            }
            tempc->next = NULL;
            ans.push_back(c->next);
        }
        if (ans.size() < k)
        {
            int extra = k - ans.size();
            for (int i = 1; i <= extra; i++)
            {
                ans.push_back(NULL);
            }
        }
        return ans;
    }
};
// @lc code=end
