ListNode* deleteDuplicates(ListNode* head)
{
    if (head == NULL)
        return NULL;        
    
    ListNode* previous = head;
    ListNode* traverse = head->next;
    while (traverse)
    {
        if (previous->val == traverse->val)
        {
            previous->next = traverse->next;
            delete traverse;
            traverse = previous->next;
        }
        else
        {
            previous = traverse;
            traverse = traverse->next;
        }
    }
    
    return head;
}