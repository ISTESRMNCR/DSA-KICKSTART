def removeDuplicates(head):
    temp=head
    while temp is not None:
        if(temp.next is not None and temp.data==temp.next.data):
            d=temp.data
            next_node=temp.next
            while(next_node is not None and next_node.data==d):
                next_node=next_node.next
            temp.next=next_node
        else:
            temp=temp.next

class Node:
    def __init__(self, data):
        self.data = data
        self.next = None

class LinkedList:
    def __init__(self):
        self.head = None
        self.tail = None

    def append(self, new_value):
        new_node = Node(new_value)
        if self.head is None:
            self.head = new_node
            self.tail = new_node
            return
        self.tail.next = new_node
        self.tail = new_node

    def printList(self):
        if self.head is None:
            print(' ')
            return
        curr_node = self.head
        while curr_node:
            print(curr_node.data, end=" ")
            curr_node = curr_node.next
        print(' ')

if __name__ == '__main__':
    t = int(input())
    for cases in range(t):
        n = int(input())
        a = LinkedList()
        nodes = list(map(int, input().strip().split()))
        for x in nodes:
            a.append(x)
        removeDuplicates(a.head)
        a.printList()
