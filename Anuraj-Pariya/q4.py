import math
import os
import random
import re
import sys
class Solution:
    def ispar(self,x):
        stack=[]
        brac= {'{':'}' , '(':')' , '[':']'}
        for char in x:
            if char in ['{','[','(']:
                stack.append(char)
            else:
                if stack:
                    p=stack.pop()
                    if brac[p] != char:
                        return 'NO'
                else:
                    return 'NO'
    
        return 'NO' if stack else 'YES'
 #{ 
#  Driver Code Starts
_INPUT_LINES = sys.stdin.read().splitlines()
input = iter(_INPUT_LINES).__next__
_OUTPUT_BUFFER = io.StringIO()
sys.stdout = _OUTPUT_BUFFER

@atexit.register

def write():
    sys.__stdout__.write(_OUTPUT_BUFFER.getvalue())


if __name__ == '__main__':
    test_cases = int(input())
    for cases in range(test_cases) :
        #n = int(input())
        #n,k = map(int,imput().strip().split())
        #a = list(map(int,input().strip().split()))
        s = str(input())
        obj = Solution()
        if obj.ispar(s):
            print("balanced")
        else:
            print("not balanced")
# } Driver Code Ends                   
            
