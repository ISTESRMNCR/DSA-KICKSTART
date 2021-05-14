class Solution:
    def sb(self, a, n, x):
        curr_sum = 0
    min_len = n + 1
    start = 0
    end = 0
    while (end < n):
        while (curr_sum <= x and end < n):
            curr_sum += arr[end]
            end += 1
            while (curr_sum > x and start < n):
                if (end - start < min_len):
                    min_len = end - start
                    curr_sum -= arr[start]
                    start += 1
return min_len
#{ 
#  Driver Code Starts
def main():

    T = int(input())

    while(T > 0):
        sz = [int(x) for x in input().strip().split()]
        n, m = sz[0], sz[1]
        a = [int(x) for x in input().strip().split()]
        print(Solution().sb(a, n, m))

        T -= 1


if __name__ == "__main__":
    main()

# } Driver Code Ends
