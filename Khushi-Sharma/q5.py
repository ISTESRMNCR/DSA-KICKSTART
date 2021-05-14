def push(x):
    global queue_1
    global queue_2
    queue_2.append(x)
    while(queue_1):
        queue_2.append(queue_1[0])
        queue_1.pop(0)
    queue_1,queue_2=queue_2,queue_1

def pop():
    global queue_1
    global queue_2
    if(queue_1):
        return queue_1.pop(0)
    else:
        return -1

queue_1 = []
queue_2 = []

if __name__=='__main__':
    test_cases=int(input())
    for cases in range(test_cases) :
        n=int(input())
        a=list(map(int,input().strip().split()))
        i=0
        while i<len(a):
            if a[i] == 1:
                push(a[i+1])
                i+=1
            else:
                print(pop(),end=" ")
            i+=1
        queue_1 = []
        queue_2 = []
        print()
