def removeDuplicates(head):
    
    temp = head
    if temp is None:
        return
    while temp.next is not None:
        if temp.data == temp.next.data:
                new = temp.next.next
                temp.next = None
                temp.next = new
        else:
                temp = temp.next
    return head
