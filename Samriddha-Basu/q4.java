import java.util.*;
import java.io.*;
import java.lang.*;
class Driverclass
{
    public static void main(String args[])
    {
        Scanner sc= new Scanner(System.in);
        int t=sc.nextInt();
        while(t-->0)
        {
            String st=sc.next();
            if(new Solution().ispar(st) == true)
                System.out.println("balanced");
            else
                System.out.println("not balanced");
        }
    }
}
class Solution
{
    static boolean ispar(String expr)
    {
        Deque<Character> stack
                = new ArrayDeque<Character>();
        for (int i = 0; i < expr.length(); i++)
        {
            char x = expr.charAt(i);

            if (x == '(' || x == '[' || x == '{')
            {
                stack.push(x);
                continue;
            }
            if (stack.isEmpty())
                return false;
            char bracs;
            switch (x) {
                case ')':
                    bracs = stack.pop();
                    if (bracs == '{' || bracs == '[')
                        return false;
                    break;

                case '}':
                    bracs = stack.pop();
                    if (bracs == '(' || bracs == '[')
                        return false;
                    break;

                case ']':
                    bracs = stack.pop();
                    if (bracs == '(' || bracs == '{')
                        return false;
                    break;
            }
        }
        return (stack.isEmpty());

    }
}
