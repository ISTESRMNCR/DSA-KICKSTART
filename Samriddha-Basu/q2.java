import java.io. *;
import java.util.*;

class GFG {

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        int t = Integer.parseInt(br.readLine().trim());
        while (t > 0) {
            int n = Integer.parseInt(br.readLine().trim());
            String x = br.readLine().trim();
            String string_list[] = x.split(" ", n);
            Solution T = new Solution();
            List<List<String>> ans = T.Anagrams(string_list);

            Collections.sort(ans, new Comparator<List<String>>() {
                public int compare(List<String> l1, List<String> l2) {
                    String s1 = l1.get(0);
                    String s2 = l2.get(0);
                    return s1.compareTo(s2);
                }
            });
            for (int i = 0; i < ans.size(); i++) {
                for (int j = 0; j < ans.get(i).size(); j++) {
                    System.out.print(ans.get(i).get(j) + " ");
                }
                System.out.println();
            }
            t--;
        }
    }
}
class Solution
{
    public List<List<String>> Anagrams(String[] string_list)
    {
        if (string_list.length == 0) return new ArrayList();
        Map<String, List> solution = new HashMap<String, List>();
        for (String str : string_list)
        {
            char[] c = str.toCharArray();
            Arrays.sort(c);
            String key = String.valueOf(c);
            if (!solution.containsKey(key)) solution.put(key, new ArrayList());
            solution.get(key).add(str);
        }
        return new ArrayList(solution.values());
    }
}