//using dummy node
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode * head = new ListNode(0);
        ListNode * tail = head;
        while(list1 != nullptr and list2 != nullptr)
        {
            if(list1->val <= list2->val)
            {
                ListNode * newnode = new ListNode(list1->val);
                tail->next = newnode;
                tail = newnode;
                list1 = list1->next;
            }
            else
            {
                ListNode * newnode = new ListNode(list2->val);
                tail->next = newnode;
                tail = newnode;
                list2 = list2->next;
            }
        }
        while(list1 != nullptr)
        {
            ListNode * newnode = new ListNode(list1->val);
            tail->next = newnode;
            tail = newnode;
            list1 = list1->next;
        }
        while(list2 != nullptr)
        {
            ListNode * newnode = new ListNode(list2->val);
            tail->next = newnode;
            tail = newnode;
            list2 = list2->next;
        }
        ListNode * merge = head->next;
        delete head;
        return merge;
    }
