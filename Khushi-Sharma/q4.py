class Solution:
    def ispar(self, x):
        stack = []
        brackets = {"{": "}", "[": "]", "(": ")"}
        for char in x:
            if (char == "{" or char == "[" or char == "("):
                stack.append(char)
            else:
                if stack:
                    top = stack.pop()
                    if (brackets[top] != char):
                        return False
                else:
                    return False
        return False if stack else True

if __name__ == '__main__':
    test_cases = int(input())
    for cases in range(test_cases):
        s = str(input())
        obj = Solution()
        if obj.ispar(s):
            print("balanced")
        else:
            print("not balanced")
