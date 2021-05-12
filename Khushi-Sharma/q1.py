class Solution:
    def sb(self, a, n, x):
        s = 0
        leng = n + 1
        b, l = 0, 0
        while (l < n):
            while (s <= x and l < n):
                s += a[l]
                l += 1
            while (s > x and b < n):
                if (l - b < leng):
                    leng = l - b
                s -= a[b]
                b += 1
        return leng


def main():
    T = int(input())
    while (T > 0):
        sz = [int(x) for x in input().strip().split()]
        n, m = sz[0], sz[1]
        a = [int(x) for x in input().strip().split()]
        print(Solution().sb(a, n, m))
        T -= 1


if __name__ == "__main__":
    main()