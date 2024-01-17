/*
 * @lc app=leetcode id=142 lang=cpp
 *
 * [142] Linked List Cycle II
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode *slow=head;
        ListNode *fast=head;
        bool flag=false;
        while(fast!=NULL && fast->next!=NULL)
        {
            slow=slow->next;
            fast=fast->next->next;//does not depends on this u can go to three x or 
            // four x speed and it hits the condition as it the formula between the length and left length 
            // depends on m=l-2n where m is the loop condition hits length and n is the  length of slow 
            if(slow==fast){
                flag=true;
                break;
            }
        }
        if(flag==false)return NULL;
        else{
            ListNode*temp=head;
            while(temp!=slow){
                slow=slow->next;
                temp=temp->next;
            }
            return slow;
        }
    }
};
// @lc code=end

