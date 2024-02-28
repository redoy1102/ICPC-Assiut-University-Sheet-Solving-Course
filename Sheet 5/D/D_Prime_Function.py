import math as ma
def isPrime(n):
    if n <= 1:
        return False
    else:
        for i in range(2, int(ma.sqrt(n))+1):
            if n % i == 0:
                return False
        return True

def solve():
    # n, ch = map(str, input().split())
    n = int(input())
    res = isPrime(n)
    if res: print("YES")
    else:   print("NO")

def main():
    t = int(input())
    for i in range(t):
        solve()
        
if __name__ == "__main__":
    main()