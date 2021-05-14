import java.util.*;
class StackUsingQueues
{
    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t>0)
        {
            Queues g = new Queues();
            int q = sc.nextInt();
            while(q>0)
            {
                int QueryType = sc.nextInt();
                if(QueryType ==1)
                {
                    int a = sc.nextInt();
                    g.push(a);
                }
                else if(QueryType == 2)
                    System.out.print(g.pop()+" ");
                q--;
            }
            System.out.println();
            t--;
        }
    }
}
class Queues
{
    Queue<Integer> q1 = new LinkedList<Integer>();
    Queue<Integer> q2 = new LinkedList<Integer>();

    void push(int a)
    {
        while(!q1.isEmpty())
        {
            int k = q1.peek();
            q1.remove();
            q2.add(k);
        }
        q1.add(a);
        while(!q2.isEmpty())
        {
            int k = q2.peek();
            q2.remove();
            q1.add(k);

        }
    }

    int pop()
    {
        if(!q1.isEmpty())
        {
            int r = q1.peek();
            q1.remove();
            return r;
        }
        return -1;
    }

}