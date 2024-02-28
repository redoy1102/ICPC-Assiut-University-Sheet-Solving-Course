def fun(num, x):
    x %= len(num)   # effective number of rotation
    for _ in range(0, x):
        lastValue = num[len(num)-1]
        for i in range(len(num)-1, 0, -1):
            num[i] = num[i-1]
        num[0] = lastValue
    return num

def main():
    n, x = map(int, input().split())
    num = [int(i) for i in input().split()][:n]
    res = fun(num, x)
    print(*res)

if __name__ == "__main__":
    main()
    
        