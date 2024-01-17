/*
 * @lc app=leetcode id=160 lang=cpp
 *
 * [160] Intersection of Two Linked Lists
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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *tempa=headA;
        ListNode *tempb=headB;
        int lena=0;
        while(tempa!=NULL){
            lena++;
            tempa=tempa->next;
        }
        int lenb=0;
        while(tempb!=NULL)
        {
            lenb++;
            tempb=tempb->next;
        }
        tempa=headA;
        tempb=headB;
        if(lena>lenb){
            int diff=lena-lenb;
            for(int i=1;i<=diff;i++){
                tempa=tempa->next;}
                while(tempa!=tempb){
                    tempa=tempa->next;
                    tempb=tempb->next;
                }
            return tempa;
        }
        else{
            int diff=lenb-lena;
            for (int i = 1; i <= diff; i++)
            {
                tempb = tempb->next;
            }
            while (tempa != tempb)
                {
                    tempa = tempa->next;
                    tempb = tempb->next;
                }
            return tempa;
        }
    }
};
// @lc code=end

