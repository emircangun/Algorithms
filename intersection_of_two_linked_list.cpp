ListNode *getIntersectionNode(ListNode *headA, ListNode *headB)
{
    int a = 0, b = 0;
    ListNode* ta = headA, *tb = headB;
    while (ta != NULL)
    {
        a++;
        ta = ta->next;
    }
    while (tb != NULL)
    {
        b++;
        tb = tb->next;
    }
    
    ta = headA; // ta -> bigger
    tb = headB; // tb -> smaller
    if (a < b)
    {
        ta = headB;
        tb = headA;
    }
    
    for (int i = 0; i < abs(a - b); i++)
        ta = ta->next;
    
    while (ta != NULL || tb != NULL)
    {
        if (ta == tb)
            return ta;
        ta = ta->next;
        tb = tb->next;
    }
    
    return NULL;
}