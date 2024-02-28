def fun(A, B):
    C = B + A
    return C

def main():
    n = int(input())
    A = [int(i) for i in input().split()][:n]
    B = [int(i) for i in input().split()][:n]
    res = fun(A, B)
    print(*res)

if __name__ == "__main__":
    main()