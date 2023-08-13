//using recursion
if(list1 == NULL)
        {
            return list2;
        }
        if(list2 == NULL)
        {
            return list1;
        }
        if(list1->val<list2->val)
        {
            ListNode*newhead = list1;
            newhead->next = mergeTwoLists(list1->next,list2);
            return newhead;
        }
        else
        {
            ListNode*newhead = list2;
            newhead->next = mergeTwoLists(list1,list2->next);
            return newhead;
        }
