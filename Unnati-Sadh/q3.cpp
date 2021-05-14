//Function to remove duplicates from sorted linked list.
Node* removeDuplicates(Node *head)
{
  
   struct Node* current = head;
    
    //traversing through the linked list.
    while (current->next != NULL)       
    {
        
        if (current->data == current->next->data)
           current->next = current->next->next;
           
        
        else
           current = current->next; 
    }
    return head;
    
}