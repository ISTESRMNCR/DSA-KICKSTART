import java.util.*;
import java.lang.*;
import java.io.*;
class GFG
{
    public static void main(String[] args) throws IOException
    {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.parseInt(br.readLine().trim());
        while(t-->0)
        {
            StringTokenizer stt = new StringTokenizer(br.readLine());
            long n = Long.parseLong(stt.nextToken());
            long m = Long.parseLong(stt.nextToken());
            long a[] = new long[(int)(n)];
            String inputLine[] = br.readLine().trim().split(" ");
            for (int i = 0; i <n; i++)
            {
                a[i] = Long.parseLong(inputLine[i]);
            }
            Solution obj = new Solution();
            System.out.println(obj.sb(a, n, m));
        }
    }
}
class Solution
{

    public static long sb(long arr[], long n, long x)
    {
        long t = 0, s = n + 1;
        int u = 0, l = 0;
        while (l < n)
        {
            while (t <= x && l < n)
                t += arr[l++];
            while (t > x && u < n)
            {
                if (l - u < s)
                    s = l - u;
                t -= arr[u++];
            }
        }
        return s;

    }
}