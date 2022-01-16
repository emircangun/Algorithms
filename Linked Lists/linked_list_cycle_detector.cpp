bool hasCycle(ListNode *head)
{
    if (head == NULL)
        return false;
    
    ListNode *slow = head, *fast = head->next;
    while (slow != fast)
    {
        if (fast == NULL || fast->next == NULL)
            return false;
        
        slow = slow->next;
        fast = fast->next->next;
    }
    
    return true;
}


// lil touch from Ayca ;)

bool has_cycle(SinglyLinkedListNode* head) {
    if (head == NULL) return false;
    
    SinglyLinkedListNode *slow = head;
    SinglyLinkedListNode *fast = head;
    
    while (fast != NULL && fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast) return true;
    }
    
    return false;

}
