class Solution
{
public:
    vector<int> nodesBetweenCriticalPoints(ListNode *head)
    {
        int idx = 1;
        ListNode *a = head;
        ListNode *b = head->next;
        ListNode *c = head->next->next; 
        int fidx = -1;
        int sidx = -1;
        int f = -1;
        int minidx = __INT_MAX__;
        int s = -1;
        if (c == NULL)return {-1,-1};
        while (c)
        {
            if ((b->val > a->val && b->val > c->val || b->val < a->val && b->val < c->val)){
                if (fidx == -1)fidx = idx;
            else sidx = idx; 
            f = s;
            s = idx;
            if (f != -1)
            {
                int d = s-f;
                minidx = min(minidx, d);
            }
        }
            a = a->next;
            b = b->next;
            c = c->next;
            idx++;
        }
        if (sidx == -1)return {-1,-1};
        int maxdis = sidx - fidx;
        return {minidx,maxdis};
    }
};