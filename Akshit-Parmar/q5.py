from queue import Queue
  
class Stack:
      
    def __init__(self):
          
        self.que1 = Queue()
        self.que2 = Queue() 
              
     
        self.currentsize = 0
  
    def push(self, x):
        self.currentsize += 1
  
        self.que2.put(x) 
  
      
        while (not self.que1.empty()):
            self.que2.put(self.que1.queue[0]) 
            self.que1.get()
  
        self.que = self.que1 
        self.que1 = self.que2 
        self.que2 = self.que
  
    def pop(self):
  
        if (self.que1.empty()): 
            return
        self.que1.get() 
        self.currentsize -= 1
  
    def top(self):
        if (self.que1.empty()):
            return -1
        return self.que1.queue[0]
  
    def size(self):
        return self.curressize
  
if __name__ == '__main__':
    s = Stack()
    s.push(2) 
    s.push(3)
    s.pop() 
    s.push(4)
 
    print(s.top()) 
    s.pop() 
    print(s.top()) 
  
   
  
