class Solution:
    def generateParenthesis(self, n: int) -> List[str]:
        # if open < n add a opening parenthesis
        # if closed < open add a closing parenthesis
        # if both are equal and equal to n end
        stack = []
        result = []
        
        def backtrack(openN,closedN):
            if openN == closedN == n:
                result.append("".join(stack))
                return
            if openN < n:
                stack.append('(')
                backtrack(openN + 1, closedN)
                stack.pop()
            if closedN < openN:
                stack.append(')')
                backtrack(openN,closedN + 1)
                stack.pop()
        backtrack(0,0)
        return result
                
