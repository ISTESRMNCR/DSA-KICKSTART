class Solution:

    # Function to check if brackets are balanced or not.
    def ispar(x):
        ans = []
        c = 0
        for i in x:
            if i == "(" or i == "[" or i == "{":
                ans.append(i)
            else:
                if ans == []:
                    c = 0
                    return False
                else:
                    t = ans.pop()
                    if (t == "(" and i != ")") or (t == "[" and i != "]") or (t == "{" and i != "}"):
                        c = 0
                        return False
                    else:
                        c = 1
        if c == 1 and ans == []:
            return True
        else:
            return False

    x=input()
    print(ispar(x))

