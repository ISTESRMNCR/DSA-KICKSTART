
#enter the input array in the form of a string with space seperated numbers
class Solution:
    
    def sb(a, n, x):
    # Your code goes here
        start=0
        end=0
        minl=n+1#initial minimum length
        sum=0#""sum
        
        while(end<n):
            #To keep adding numbers till sum>x
            while(sum<=x and end<n):
                sum+=a[end]
                end+=1
            
            #to minimize the length
            while(start<n and sum>x):
                if (end-start)<minl :
                    minl=end-start
                    
                sum-=a[start]
                start+=1
            
        return minl    
    
    print("Enter the array(in space seperated string form\n")
    a = map(int, input().split())
    a = list(a)
    n = len(a)
    x = int(input("Enter the number\n"))
    print(sb(a, n, x))       