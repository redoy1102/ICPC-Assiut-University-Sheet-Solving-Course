def solve():
    n, ch = map(str, input().split())
    n = int(n)
    for _ in range(n):
        print(ch, end=" ")
    print()

def main():
    t = int(input())
    for i in range(t):
        solve()
        
if __name__ == "__main__":
    main()