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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int val1, val2, sum;
	int flag = 0;
	ListNode* tmp = NULL;
	ListNode* pHead = NULL;
	ListNode* oldtemp = NULL;
	while ((l1 != NULL) || (l2 != NULL))
	{
		if (l1 == NULL)
			val1 = 0;
		else
		{
			val1 = l1->val;
			l1 = l1->next;
		};

		if (l2 == NULL)
			val2 = 0;
		else
		{
			val2 = l2->val;
			l2 = l2->next;
		};
		sum = val1 + val2 + flag;
		flag = sum / 10;
		oldtemp = tmp;
		tmp = new ListNode(sum % 10);
		if (pHead == NULL) {
			pHead = tmp;
		}
		else
		{
			oldtemp->next = tmp;
		}
	}
	if (flag > 0)
	{
	    oldtemp = tmp;
		tmp = new ListNode(flag);
		oldtemp->next = tmp;
	}
	return pHead;
    }
};