/*
 * @lc app=leetcode id=61 lang=cpp
 *
 * [61] Rotate List
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if (head == NULL || head->next == NULL || k == 0)
            return head;
        ListNode *temp = head;
        ListNode *tail = NULL;
        int len = 0;
        while (temp != NULL)
        {
            if (temp->next == NULL)
                tail = temp;
            len++;
            temp = temp->next;
        }
        k = k % len;
        if (k == 0)
            return head;
        temp = head; // Reset temp to the beginning of the list
        for (int i = 0; i < len - k - 1; i++)
        {
            temp = temp->next;
        }
        tail->next = head;
        head = temp->next;
        temp->next = NULL;
        return head;
    }
};
// @lc code=end

