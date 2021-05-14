def ispar(myStr):
    open_lst = ["[","{","("]
    close_lst = ["]","}",")"]
    stack = []
    for i in myStr:
        if i in open_lst:
            stack.append(i)
        elif i in close_lst:
            pos = close_lst.index(i)
            if ((len(stack) > 0) and (open_lst[pos] == stack[len(stack)-1])):
                stack.pop()
            else:
                return "False"
    if len(stack) == 0:
        return "true"
    else:
        return "False"
string = "{[]{()}}"
print(string,"=", ispar(string))
  
string = "[{}{})(]"
print(string,"=", ispar(string))
  
string = "((()"
print(string,"=",ispar(string))
